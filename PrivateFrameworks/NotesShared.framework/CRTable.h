/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRTable : ICCRObject <ICCRUndoDelegate> {
    NSObject<ICCRUndoDelegate> * _delegate;
}

@property (nonatomic, readonly) ICCRDictionary *cellColumns;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, retain) NSString *columnDirection;
@property (nonatomic, readonly) ICCRTombstoneOrderedSet *crColumns;
@property (nonatomic, readonly) ICCRTombstoneOrderedSet *crRows;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) NSObject<ICCRUndoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLeftToRight;
@property (nonatomic, readonly) bool isRightToLeft;
@property (nonatomic, readonly) unsigned long long rowCount;
@property (readonly) Class superclass;

+ (id)CRProperties;
+ (void)registerWithICCRCoder;

- (void).cxx_destruct;
- (void)addUndoCommandsForObject:(id)arg1 block:(id /* block */)arg2;
- (id)cellColumns;
- (unsigned long long)columnCount;
- (id)columnDirection;
- (unsigned long long)columnIndexForIdentifier:(id)arg1;
- (id)columnIndexesForIdentifiers:(id)arg1;
- (id)columnsIntersectingWithColumns:(id)arg1;
- (bool)containsColumn:(id)arg1;
- (bool)containsRow:(id)arg1;
- (unsigned long long)countOfPopulatedCells;
- (id)crColumns;
- (id)crRows;
- (id)crTableColumnDirection;
- (id)defaultContentAtColumn:(id)arg1 row:(id)arg2;
- (id)delegate;
- (void)enumerateCellObjectsInCellSelectionContainingColumnIndices:(id)arg1 rowIndices:(id)arg2 copyItems:(bool)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateColumnsWithBlock:(id /* block */)arg1;
- (void)enumerateRowsWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)identifierForColumnAtIndex:(unsigned long long)arg1;
- (id)identifierForRowAtIndex:(unsigned long long)arg1;
- (id)identifiersForColumnIndexes:(id)arg1;
- (id)identifiersForRowIndexes:(id)arg1;
- (id)identity;
- (id)initWithDocument:(id)arg1;
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2;
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2 crColumns:(id)arg3 crRows:(id)arg4 cellColumns:(id)arg5;
- (id)initWithDocument:(id)arg1 isRightToLeft:(bool)arg2;
- (id)initWithIdentity:(id)arg1 fields:(id)arg2;
- (id)insertColumnAtIndex:(unsigned long long)arg1;
- (id)insertColumns:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (id)insertRows:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLeftToRight;
- (bool)isRightToLeft;
- (void)moveColumnAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)objectForColumnID:(id)arg1 rowID:(id)arg2;
- (id)objectForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)removeColumnAtIndex:(unsigned long long)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (void)reverseColumnDirection;
- (unsigned long long)rowCount;
- (unsigned long long)rowIndexForIdentifier:(id)arg1;
- (id)rowIndexesForIdentifiers:(id)arg1;
- (id)rowsIntersectingWithRows:(id)arg1;
- (void)setColumnDirection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;
- (void)setObject:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3;
- (id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3;
- (void)undoablyInsertContents:(id)arg1 atColumn:(id)arg2;
- (void)undoablyInsertContents:(id)arg1 atRow:(id)arg2;
- (void)undoablyRemoveContentsOfColumn:(id)arg1;
- (void)undoablyRemoveContentsOfRow:(id)arg1;
- (bool)wantsUndoCommands;

@end
