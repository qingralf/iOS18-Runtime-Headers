/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainerItemDiffOperation : NSOperation {
    ML3DatabaseConnection * _connection;
    NSArray * _containerItemsToDelete;
    NSArray * _containerItemsToUpdate;
    long long  _containerPersistentID;
    NSArray * _updatedItemsPersistentIDs;
    NSDictionary * _updatedItemsProperties;
}

@property (nonatomic, retain) NSArray *containerItemsToDelete;
@property (nonatomic, retain) NSArray *containerItemsToUpdate;

- (void).cxx_destruct;
- (id)containerItemsToDelete;
- (id)containerItemsToUpdate;
- (id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 connection:(id)arg3;
- (id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 updatedItemsProperties:(id)arg3 connection:(id)arg4;
- (void)main;
- (void)setContainerItemsToDelete:(id)arg1;
- (void)setContainerItemsToUpdate:(id)arg1;

@end
