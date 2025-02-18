---
cssclasses:
  - dot-grid
  - pen-purple
  - cards
---
# Ongoing
```dataview
Table without ID ("![|100](" + cover + ")") as Cover, series as Series, bookNo as "No.", file.link as Title, author as Author, "Pages: "+ pages as Pages, category as genre, rating From "02 - Areas/Books" 

Where contains(status, "Ongoing") 
SORT bookNo ASC
```


---
# Not Started
```dataview
Table without ID ("![|100](" + cover + ")") as Cover, series as Series, bookNo as "No.", file.link as Title, author as Author, "Pages: "+ pages as Pages, category as genre, rating From "02 - Areas/Books" 

Where contains(status, "Not Started") 
SORT series ASC , bookNo ASC
```


# Finished

```dataview
Table without ID ("![|100](" + cover + ")") as Cover, series as Series, bookNo as "No.", file.link as Title, author as Author, "Pages: "+ pages as Pages, category as genre, rating From "02 - Areas/Books" 

Where contains(status, "Finished") 
SORT series ASC , bookNo ASC
```
