/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFlatLevelSaltingEnumerator : NSEnumerator {
    PQLResultSet<PQLEnumeration> * _enumerator;
    BRCItemID * _itemID;
}

+ (id)newEnumeratorForItemID:(id)arg1 clientZone:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItemID:(id)arg1 clientZone:(id)arg2;
- (id)nextObject;

@end
