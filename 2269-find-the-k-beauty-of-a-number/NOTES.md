int count = 0;
string s = to_string(num);
for(int i=0; i<s.length()-k+1; i++)
{
int sub = stoi(s.substr(i,k));
if(sub !=0 && num%sub == 0)
count++;
}
return count;