echo ���������� ��������� ����������, ���������� ��������� 1 ���
git config --global user.name NEFUstudent
git config --global user.email study.svfu@gmail.com
echo ������� ������� ���� ����� ������
git add -A
echo ������ ���� ��������� ���������, �� �������� � ����������� ��������� ���� ��������� ���������
git commit -a -m "ya sdell zadachy!"
echo ���������� ��� ��������� �� ���������� ����������� � ��������� �������
git pull origin master
echo ���������� �������, ���� ��������� �������� � ��������� �����������
git push origin master
