#include <iostream>
using namespace std;

//Câu a:
int a[100];
int n;

//Câu b:
void nhapDS()
{
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}

//Câu c:
void xuatDS()
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

//Câu d:
int timPT(int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

//Câu e:
void themPTcuoi(int x)
{
    if(n<100)
    {
        a[n]=x;
        n++;
        cout<<"Them phan tu o cuoi danh sach thanh cong!\n";
    }
    else
    {
        cout<<"Danh sach da day, khong the them!\n";
    }
}

//Câu f:
void xoaPTcuoi()
{
    if(n>0)
    {
        n--;
        cout<<"Xoa phan tu o cuoi danh sach thanh cong!\n";
    }
    else
    {
        cout<<"Danh sach rong, khong co phan tu nao de xoa!\n";
    }
}

//Câu g:
void xoaPT(int i)
{
    if(i>=0&&i<n)
    {
        for(int j=i;j<n-1;j++)
        {
            a[i]=a[j+1];
        }
        n--;
        cout<<"Xoa phan tu tai vi tri "<<i<<" thanh cong!\n";
    }
    else
    {
        cout<<"Vi tri khong hop le, khong the xoa phan tu!\n";
    }
}

//Câu h:
void themPT(int x,int i)
{
    if(i>=0&&i<=n&&n<100)
    {
        for(int j=n-1;j>=i;j--)
        {
            a[j+1]=a[j];
        }
        a[i]=x;
        n++;
        cout<<"Them phan tu tai vi tri "<<i<<" thanh cong!\n";
    }
    else
    {
        cout<<"Vi tri khong hop le, khong the them phan tu!\n";
    }
}

//Câu i:
void timVaXoaPT(int x)
{
    int i=timPT(x);
    if(i!=-1)
    {
        xoaPT(i);
        cout<<"Tim thay phan tu "<<x<<" va da xoa phan tu do!\n";
    }
    else
    {
        cout<<"Khong tim thay phan tu "<<x<<" trong danh sach!\n";
    }
}

//Hàm thực thi:
int main()
{
    int luachon,x,i;
    do
    {
        cout<<"========== LUA CHON ==========\n";
        cout<<"1. Nhap danh sach.\n";
        cout<<"2. Xuat danh sach.\n";
        cout<<"3. Tim phan tu trong danh sach.\n";
        cout<<"4. Them phan tu vao cuoi danh sach.\n";
        cout<<"5. Xoa phan tu o cuoi danh sach.\n";
        cout<<"6. Xoa phan tu tai vi tri i.\n";
        cout<<"7. Them phan tu tai vi tri i.\n";
        cout<<"8. Tim va xoa phan tu trong danh sach.\n";
        cout<<"0. Thoat.\n";
        cout<<"=============================\n";
        cout<<"Nhap lua chon cua ban: ";
        cin>>luachon;

        switch(luachon)
        {
            case 1:
                nhapDS();
                break;
            case 2:
                xuatDS();
                break;
            case 3:
                cout<<"Nhap phan tu can tim: ";
                cin>>x;
                i=timPT(x);
                if(i!=-1)
                {
                    cout<<"Tim thay phan tu "<<x<<" tai vi tri "<<i<<endl;
                }
                else
                {
                    cout<<"Khong tim thay phan tu "<<x<<" trong danh sach!\n";
                }
                break;
            case 4:
                cout<<"Nhap phan tu can them vao cuoi danh sach: ";
                cin>>x;
                themPTcuoi(x);
                break;
            case 5:
                xoaPTcuoi();
                break;
            case 6:
                cout<<"Nhap vi tri can xoa: ";
                cin>>i;
                xoaPT(i);
                break;
            case 7:
                cout<<"Nhap phan tu can them: ";
                cin>>x;
                cout<<"Nhap vi tri can them: ";
                cin>>i;
                themPT(x,i);
                break;
            case 8:
                cout<<"Nhap phan tu can tim va xoa: ";
                cin>>x;
                timVaXoaPT(x);
                break;
            case 0:
                cout<<"Thoat!\n";
                break;
            default:
                cout<<"Lua chon khong hop le, vui long chon lai.\n";
                break;
        }
        cout<<endl;
    } while (luachon!=0);
    return 0;
}