/* Generated by RuntimeBrowser.
 */

@protocol _DUIDragSessionLifecycleListening <NSObject>

@required

- (oneway void)dragDidBeginWithSession:(void *)arg1 identifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: <_DUIServerSessionRemoteDragManipulation> *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)dragDidEndWithSession:(id <_DUIServerSessionRemoteDragManipulation>)arg1;
- (oneway void)dragDidEndWithSession:(id <_DUIServerSessionRemoteDragManipulation>)arg1 identifier:(unsigned int)arg2;

@end
