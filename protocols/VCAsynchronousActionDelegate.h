/* Generated by RuntimeBrowser.
 */

@protocol VCAsynchronousActionDelegate <NSObject>

@required

- (bool)actionDidFinishForContext:(const struct tagVCAsynchronousActionContext { unsigned char x1; void *x2; }*)arg1 withError:(id*)arg2;
- (bool)actionWillBeginForContext:(const struct tagVCAsynchronousActionContext { unsigned char x1; void *x2; }*)arg1 withError:(id*)arg2;

@end
