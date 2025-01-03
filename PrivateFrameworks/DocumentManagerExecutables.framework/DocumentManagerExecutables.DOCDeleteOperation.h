/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
 */

@interface DocumentManagerExecutables.DOCDeleteOperation : FPDeleteOperation <DOCUndoableOperation> {
    void items;
    void originalOperation;
    void undoManager;
}

@property (nonatomic, readonly) NSString *actionNameForUndoing;

- (void).cxx_destruct;
- (id)actionNameForUndoing;
- (id)initWithItems:(id)arg1;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (void)registerUndo;

@end
