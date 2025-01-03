/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLModel : NSStoreMapping {
    unsigned long long  _brokenHashVersion;
    NSMutableArray * _entities;
    NSKnownKeysDictionary * _entitiesByName;
    id * _entityDescriptionToSQLMap;
    unsigned int  _entityIDOffset;
    bool  _hasVirtualToOnes;
    unsigned int  _lastEntityID;
    bool  _modelHasPrecomputedKeyOrder;
    NSManagedObjectModel * _mom;
    bool  _retainLeopardStyleDictionaries;
}

- (bool)_generateModelWithError:(id*)arg1;
- (void)dealloc;
- (id)entityForID:(unsigned long long)arg1;
- (id)entityNamed:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(bool)arg3;
- (id)managedObjectModel;

@end
