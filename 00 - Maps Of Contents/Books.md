---
cssclasses:
  - dot-grid
  - pen-purple
---
# Ongoing
```dataview
Table without ID ("![|100](" + cover + ")") as Cover, file.link as Title, author as Author, "Pages: "+ pages, category as genre, rating From "02 - Areas/Books" 

Where contains(status, "Ongoing") 

```

---
# Not Started
```dataview
Table without ID ("![|100](" + cover + ")") as Cover, file.link as Title, author as Author, "Pages: "+ pages, category as genre, rating From "02 - Areas/Books" 

Where contains(status, "Not Started") 

```


# Finished

```dataview
Table without ID ("![|100](" + cover + ")") as Cover, series as Series, [book no.) as "No.", file.link as Title, author as Author, "Pages: "+ pages, category as genre, rating From "02 - Areas/Books" 

Where contains(status, "Finished") 

```
