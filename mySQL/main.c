#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>
#include <mysql.h>
#include <my_global.h>

void main()
{
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    char *server = "127.0.0.1";

    char *user = "root";
    char *password = "Mohitsnehaparag1#";
    char *database  = "mysql";
    conn = mysql_init(NULL);

    if(!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)){
        fprintf(stderr,"%s\n",mysql_error(conn));
        exit(1);
    }


    mysql_close(conn);
}
