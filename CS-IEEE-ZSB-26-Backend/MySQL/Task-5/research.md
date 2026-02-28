# Last-Task Research 

## [Window Functions vs GROUP BY](#function-vs-group-by)
## [Clustered vs Non-Clustered Indexes](#clustered-vs-non-clustered-index-leaf-nodes)
## [Filtered & Unique Indexes](#filtered--unique-indexes-1)
## [Choosing the Right Index](#choosing-the-right-index-for-a-staging-table)
## [Database Transactions (ACID)](#database-transactions-acid-1)

### Function Vs Group By 

- `GROUP BY` **reduces the granularity** of the result.  
  It collapses multiple rows into one row per group, so the output has fewer rows.

- `Window functions` **preserve the original granularity**.  
  They perform calculations across a group of rows but still return one result for each original row.

`GROUP BY` changes the number of rows.  
`Window functions` keep the same number of rows.

--- 
### Clustered vs Non-Clustered Index (Leaf Nodes)

- **`Clustered Index`**
  - The leaf nodes contain the actual data rows.
  - The table data is physically ordered based on this index.

- **`Non-Clustered Index`**
  - The leaf nodes contain index key values.
  - They also contain a pointer (row locator) to the actual data.

 **`Why Only One Clustered Index?`**

- Because the table’s data can be physically sorted in only one way.
- Since the clustered index defines the physical order of the table, only one can exist per table.
---

### Filtered & Unique Indexes.
 - **`Filtered Index`**

    - A **Filtered Index** is a non-clustered index that includes only rows that match a specific WHERE condition.
    - It stores a subset of the table instead of all rows.
    - It reduces storage usage.
    - It improves query performance when queries match the filter condition.


- **`Unique Index (on Email column)`**

    - A **Unique Index** enforces that all values in the column must be different.
    - It speeds up SELECT statements because the database can quickly locate a single matching row.
    - It slows down INSERT statements because the database must check the index to ensure the new value does not already exist.
--- 

### Choosing the Right Index for a Staging Table

- Use a **Heap Structure** (no clustered index).
- Do NOT use Clustered or Non-Clustered indexes.

 **`Why?`**

- Inserts are extremely fast in a heap because SQL Server simply adds rows without maintaining any order.
- Indexes (clustered or non-clustered) would slow down inserts because they must maintain B-Tree structure.
- Since the data is read only once and then deleted, indexing provides little long-term benefit.
- Avoiding indexes reduces write overhead and improves bulk insert performance.## Choosing the Right Index for a Staging Table

--- 

### Database Transactions (ACID).

**` Atomicity (All or Nothing)`**

- **Atomicity** means a transaction must either complete fully or not happen at all.
- If any part of the transaction fails, the entire transaction is rolled back.
- The database will never save a partial result.

 **`What Happens Without a Transaction?`**

- If a failure occurs in the middle of multiple operations,
  some changes may be saved while others are not.
- This creates inconsistent or corrupted data.
- For example, money could be deducted from one bank account
  but not added to the other account.

--- 