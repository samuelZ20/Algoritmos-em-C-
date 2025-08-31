#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

string arquivo1, arquivo2, arquivo3, texto1, texto2;

cin >> arquivo1 >> arquivo2 >> arquivo3;

ifstream arquivoone (arquivo1);
 arquivoone >> texto1;

ifstream arquivotwo (arquivo2);
arquivotwo >> texto2;

ofstream arquivothree (arquivo3);
arquivothree << texto1 << " " << texto2;

arquivothree.close();

return 0;

}
