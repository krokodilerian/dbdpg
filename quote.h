
char * null_quote(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_string(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_bytea(char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_sql_binary(char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_bool(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_integer(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_int(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_float(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_name(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_geom(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_path(const char *string, STRLEN len, STRLEN *retlen, int estring);
char * quote_circle(const char *string, STRLEN len, STRLEN *retlen, int estring);
void dequote_char(const char *string, STRLEN *retlen, int estring);
void dequote_string(const char *string, STRLEN *retlen, int estring);
void dequote_bytea(char *string, STRLEN *retlen, int estring);
void dequote_sql_binary(char *string, STRLEN *retlen, int estring);
void dequote_bool(char *string, STRLEN *retlen, int estring);
void null_dequote(const char *string, STRLEN *retlen, int estring);
