#ifndef _EVENT_H_
#define _EVENT_H_

#define MAX_EVENT_TIMEOUT 500


struct event {
  int fd;
  uint32_t events;
  int (*handler)(int fd, uint32_t events, void *);
  void *ctx;
};

int event_add(struct event *ev);
int process_event();

#endif /* _EVENT_H_ */
