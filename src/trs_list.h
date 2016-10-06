/**
 * RC Translation - RC@IST/UL
 * User client - RC45179 15'16
 *
 * @author: Rui Ventura (ist181045)
 * @author: Diogo Freitas (ist181586)
 * @author: Sara Azinhal (ist181700)
 */

#define LANG_MAX_LEN 21

typedef struct trs_entry {
  char language[LANG_MAX_LEN];
  char *address;
  unsigned int port;

  struct trs_entry *next;
} trs_entry_t;

typedef struct trs_list {
  size_t size;
  struct trs_entry *head;
} trs_list_t;

trs_list_t *new_trs_list();

void add_trs_entry(trs_list_t *trs_list, const char *language,
  const char *address, unsigned short port);

void remove_trs_entry(trs_list_t *trs_list, const char *language);

trs_entry_t *get_trs_entry(trs_list_t *trs_list, const char *language);

size_t destroy_trs_list(trs_list_t *trs_list);
