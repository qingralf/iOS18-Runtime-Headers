/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLibrary : NSObject {
    void capsule;
    void identifier;
    void version;
}

@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) NSString *dotRepresentation;
@property (nonatomic, readonly) NSArray *folders;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *shortcutIdentifiers;
@property (nonatomic, readonly) NSString *version;

+ (void)performWithoutNotifyingObservers:(id /* block */)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)addShortcutWithIdentifier:(id)arg1 toCollectionWithIdentifier:(id)arg2 error:(id*)arg3;
- (bool)appendShortcutWithIdentifier:(id)arg1 toFolder:(id)arg2 error:(id*)arg3;
- (id)capsuleDataWithError:(id*)arg1;
- (id)collectionAndFolderIdentifiersContainingShortcut:(id)arg1 error:(id*)arg2;
- (id)collectionWithIdentifier:(id)arg1;
- (id)collectionWithWorkflowType:(id)arg1;
- (id)collections;
- (id)collectionsAndFoldersContainingShortcut:(id)arg1 error:(id*)arg2;
- (id)collectionsContainingShortcut:(id)arg1;
- (bool)deleteFolderWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)dotRepresentation;
- (id)folderContainingShortcut:(id)arg1 error:(id*)arg2;
- (id)folderWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)folderWithName:(id)arg1 tombstoned:(bool)arg2;
- (id)folders;
- (id)identifier;
- (id)indexOfShortcutWithIdentifier:(id)arg1 inCollectionWithIdentifier:(id)arg2 error:(id*)arg3;
- (id)indexOfShortcutWithShortcut:(id)arg1 folderIdentifier:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 data:(id)arg3;
- (id)insertFolderWithName:(id)arg1 icon:(unsigned short)arg2 identifier:(id)arg3 error:(id*)arg4;
- (void)insertShortcutWithId:(id)arg1;
- (bool)insertShortcutWithIdentifier:(id)arg1 atIndex:(long long)arg2 toCollection:(id)arg3 error:(id*)arg4;
- (bool)mergeWithOther:(id)arg1 error:(id*)arg2;
- (bool)moveFolders:(id)arg1 toIndexes:(id)arg2 error:(id*)arg3;
- (bool)moveShortcutWithIdentifier:(id)arg1 toFolder:(id)arg2 error:(id*)arg3;
- (bool)moveShortcutWithIdentifier:(id)arg1 toIndex:(long long)arg2 ofCollectionWithIdentifier:(id)arg3 error:(id*)arg4;
- (bool)moveShortcutWithIdentifier:(id)arg1 toIndex:(long long)arg2 ofFolderWithIdentifier:(id)arg3 error:(id*)arg4;
- (void)overwriteShortcutsAndFolders:(id)arg1 folders:(id)arg2;
- (void)prependShortcutWithId:(id)arg1;
- (bool)removeShortcutWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeShortcutWithIdentifier:(id)arg1 fromCollectionWithIdentifier:(id)arg2 error:(id*)arg3;
- (bool)setShortcutOrdering:(id)arg1 forCollectionIdentifier:(id)arg2 error:(id*)arg3;
- (bool)setShortcutOrdering:(id)arg1 forFolderIdentifier:(id)arg2 error:(id*)arg3;
- (id)shortcutIdentifiers;
- (id)shortcutIdentifiersWithQuery:(id)arg1 error:(id*)arg2;
- (id)shortcutsInFolderWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)tombstoneFolderWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)updateFolderWithIdentifier:(id)arg1 newName:(id)arg2 newIcon:(unsigned short)arg3 error:(id*)arg4;
- (id)version;

@end