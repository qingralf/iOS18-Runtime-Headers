/* Generated by RuntimeBrowser.
 */

@protocol PLContainsGraphNodes <NSObject>

@required

+ (id)alloc;
+ (NSDictionary *)changeFlagsKeysByNodeContainerKey;
+ (PLGraphNodeValue *)defaultValueForRequiredNodeValueKey:(NSString *)arg1 forNode:(PLGraphNode *)arg2;
+ (void)didSaveWithNode:(PLGraphNode *)arg1;
+ (id)newNodeContainerWithManagedObjectContext:(NSManagedObjectContext *)arg1;
+ (id)newNodeContainerWithNode:(PLGraphNode *)arg1;
+ (void)prepareForDeletingIncomingEdge:(PLGraphEdge *)arg1;
+ (void)prepareForDeletingOutgoingEdge:(PLGraphEdge *)arg1;
+ (void)prepareForDeletionWithNode:(PLGraphNode *)arg1;
+ (NSSet *)requiredNodeValueKeys;
+ (void)willInsertOutgoingEdge:(PLGraphEdge *)arg1;
+ (void)willSaveWithNode:(PLGraphNode *)arg1;

- (short)cloudDeleteState;
- (short)cloudLocalState;
- (void)setCloudDeleteState:(short)arg1;
- (void)setCloudLocalState:(short)arg1;
- (void)setUuid:(NSString *)arg1;
- (PLGraphNode *)sourceNode;
- (NSString *)uuid;

@end
