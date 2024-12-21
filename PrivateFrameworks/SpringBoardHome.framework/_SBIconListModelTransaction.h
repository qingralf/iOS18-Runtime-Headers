/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface _SBIconListModelTransaction : NSObject {
    NSMutableOrderedSet * _addedIcons;
    NSMutableSet * _addedNodeIdentifiers;
    NSPointerArray * _coalesceChangesAssertions;
    NSMutableSet * _deletedNodeIdentifiers;
    SBIconListModel * _listModel;
    NSMutableOrderedSet * _movedIcons;
    NSMutableOrderedSet * _removedIcons;
    SBIcon * _replacedIcon;
    SBIcon * _replacementIcon;
}

@property (nonatomic, readonly) unsigned long long assertionCount;
@property (nonatomic) SBIconListModel *listModel;
@property (nonatomic, retain) SBIcon *replacedIcon;
@property (nonatomic, retain) SBIcon *replacementIcon;

- (void).cxx_destruct;
- (void)addAddedIcons:(id)arg1;
- (void)addAssertion:(id)arg1;
- (void)addMovedIcons:(id)arg1;
- (void)addNodeIdentifiers:(id)arg1;
- (void)addRemovedIcons:(id)arg1;
- (unsigned long long)assertionCount;
- (void)commitChanges;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithListModel:(id)arg1;
- (id)listModel;
- (void)queueNotifyingListObserversDidAddIcons:(id)arg1 didRemoveIcons:(id)arg2 movedIcons:(id)arg3 didReplaceIcon:(id)arg4 withIcon:(id)arg5;
- (void)removeAssertion:(id)arg1;
- (void)removeNodeIdentifiers:(id)arg1;
- (id)replacedIcon;
- (id)replacementIcon;
- (void)setListModel:(id)arg1;
- (void)setReplacedIcon:(id)arg1;
- (void)setReplacementIcon:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end