typedef struct message{

  char *cmd;	//comando
  char *mess;	//contenuto del messaggio

} message;

typedef struct conn_arg{
	int port;		//numero di porta
	int window;		//dimensione della finestra
	int timeout;	//timeout
	int adapt;		//adaptive timeout flag
} conn_arg;

void print_error(int i,char *string);
void print_success(char *string);
int connect_client(int default_port,char *server_ip,conn_arg *ca);
void quit_conn(int sd, struct sockaddr_in server);
int list_files(int sd, struct sockaddr_in server, int N, int timeout);
int get_file(int sd, struct sockaddr_in server, char *file, char *dir_path, int N, int timeout);
int put_file(int sd, struct sockaddr_in server, char *file, char *dir_path, int N, int timeout, int adapt);
void file_transfer_debug(conn_arg args, int sd, struct sockaddr_in server, char *func, char *path);