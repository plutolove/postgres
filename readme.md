添加online关键字，实现随机采样致性相应查询，不支持join操作
### 初始化编译环境
```bash
bash -x config.sh
```
### 运行数据库
```bash
#初始化数据库环境
bash -x init.sh
#启动数据库
./bin/postgres -D $PGDATA
#新建数据库
./bin/createdb demo 
#进入SQL命令行
./bin/psql demo
```
### 生成测试数据
```sql
create table test (a integer,b integer,c integer ,d integer);
insert into abc select (random()*(10^5))::integer,(random()*(10^5))::integer,(random()*(10^5))::integer from generate_series(1,100);
```

```
rmmod btusb
rmmod btintel

modprobe btintel
modprobe btusb
```
