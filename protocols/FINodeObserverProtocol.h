/* Generated by RuntimeBrowser.
 */

@protocol FINodeObserverProtocol

@optional

- (void)childChanged:(FINode *)arg1 in:(FINode *)arg2 for:(unsigned int)arg3;
- (void)childNodePropertyChanged:(FINode *)arg1 forProperty:(unsigned int)arg2;
- (void)childNodesAdded:(NSArray *)arg1;
- (void)childNodesDeleted:(NSArray *)arg1;
- (void)childrenAdded:(NSArray *)arg1 to:(FINode *)arg2;
- (void)childrenDeleted:(NSArray *)arg1 from:(FINode *)arg2;
- (void)nodeChanged:(FINode *)arg1 for:(unsigned int)arg2;
- (void)nodeDeleted:(FINode *)arg1;
- (void)nodeOpenSyncCompleted:(FINode *)arg1;
- (void)nodeOpenSyncStarted:(FINode *)arg1;
- (void)nodePropertyChanged:(FINode *)arg1 forProperty:(unsigned int)arg2;
- (void)nodeShouldBeReloaded:(FINode *)arg1;
- (void)openSyncCompleted:(FINode *)arg1;
- (void)openSyncStarted:(FINode *)arg1;
- (void)temporaryNodeDeleted:(FINode *)arg1;

@end
