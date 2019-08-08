### 生成测试数据
```sql
create table test (a integer,b integer,c integer ,d integer);
insert into abc select (random()*(10^5))::integer,(random()*(10^5))::integer,(random()*(10^5))::integer from generate_series(1,100);
```

添加online关键字，实现随机采样致性相应查询，不支持join操作
