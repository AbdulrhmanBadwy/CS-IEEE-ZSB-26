# Research task-4 
------
## [UNION Vs UNION ALL ](#union-vs-union-all--summary)
## [SUBQUERY Vs JOIN ](#subquery-vs-join--why-join-is-often-preferred-in-production)

## UNION vs UNION ALL – Summary

### UNION
- Combines result sets and **removes duplicate rows**.
- Requires extra processing (sorting or hashing) to eliminate duplicates.
- **Slower performance** compared to UNION ALL.
- Uses more CPU and memory.

### UNION ALL
- Combines result sets and **keeps all rows**, including duplicates.
- No duplicate checking is performed.
- **Faster performance**.
- Lower resource usage.

### Key Differences

| Aspect              | UNION            | UNION ALL        |
|---------------------|------------------|------------------|
| Duplicate handling  | Removes duplicates | Keeps duplicates |
| Performance         | Slower           | Faster           |
| Resource usage      | Higher           | Lower            |
| Sorting/Comparison  | Required         | Not required     |

### When to Use
- Use **UNION** when duplicate rows must be eliminated.
- Use **UNION ALL** when duplicates are acceptable or when better performance is required.

## Subquery vs JOIN – Why JOIN Is Often Preferred in Production

Although many subqueries can be rewritten as joins, **JOINs are usually preferred in real production environments** for several reasons:

### 1. Performance
- JOINs are often **more efficient** because the query optimizer can choose better execution plans.
- Many subqueries (especially correlated subqueries) may be executed **once per row**, which can be slow on large datasets.

### 2. Better Optimization
- JOINs allow the database optimizer to:
  - Reorder tables
  - Choose optimal join algorithms (Nested Loop, Hash Join, Merge Join)
  - Use indexes more effectively
- Subqueries can limit these optimizations.

### 3. Readability and Maintainability
- JOINs make relationships between tables **explicit and clearer**.
- Easier to debug, extend, and maintain compared to deeply nested subqueries.

### 4. Scalability
- JOINs scale better as data grows.
- Subqueries may work fine on small datasets but can become performance bottlenecks in production systems.

### 5. Predictable Execution
- JOINs usually produce **more consistent and predictable performance**.
- Subqueries may behave differently depending on data size and database engine.

### When Subqueries Are Still Useful
- For simple filtering logic
- When checking existence (`EXISTS`)
- When the query is clearer and performance is acceptable

### Summary
- Prefer **JOINs** for large datasets and performance-critical queries.
- Use **subqueries** when they improve clarity and do not impact performance.