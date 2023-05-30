#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef void (*CodeCallback)(int result_code, const char *info);

void stop(void);

void set_traffic_mode(const char *mac, int mode);

const char *get_traffic_mode(const char *mac);

void update_updns(const char *updns_list);

const char *get_http_addr(void);

const char *get_socks_addr(void);

const char *get_fake_dns_addr(void);

const char *get_redirect_addresses(void);

/**
 * get result
 */
int get_result(void);

/**
 * register code callback
 */
void register_code_callback(CodeCallback cb);

/**
 * stop start runners, keep init runner
 */
void stop_start_runners(void);

/**
 * start
 */
void start(const char *json_str, CodeCallback start_err, CodeCallback runtime_err);
