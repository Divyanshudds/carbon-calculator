#include<iostream>
using namespace std;

struct connection_details{
    const char *server,*user,*password,*database;
}

MYSQL *mysql_connection_setup(struct connection_details mysql_details)
{
    MYSQL *connection = mysql_init(NULL);

    if( !mysql_real_connect(connection,mysql_details.server,mysql_details.user,mysql_details.password,mysql_details.database,0,null,0)){
        cout << "connection error:" << mysql_error(connection) ;
        exit(1);  
          }
          return connection;
}
MYSQL_RES* mysql_execte_query(MYSQL *connection,const char *sql_query)
{
    if(mysql_query(connection.sql_query)){
        cout << "MYSQL Query error:" << mysql_error(connection);
        exit(1);
    }
    return mysql_use_result(connecion);
}
 int main1(int agrc,char const *argv[])
 {
    MYSQL *con;
    MYSQL_RES *res;
    MYSQL_ROW row;

    struct connection_details mysqlD;
    mysqlD.server="localhost";
    mysqlD.user="root";
    mysqlD.password="Omsingh2003#";
    mysqlD.database="carbozone"
    

    con=mysql_connection_setup(mysqlD);
    res=mysql_execute_query(con,"select * from userdetail;");

    cout << "displaying database output : ";
    while((row=mysql_fetch_row(res))!=NULL)
    {
        cout<< row[0] << " | " << row[1] << " | " << row[2] << " | " <<row[3] << " | " <<row[4] << endl << endl;
    }
    mysql_free_result(res);
    mysql_close(con);

    return 0;
 }
 