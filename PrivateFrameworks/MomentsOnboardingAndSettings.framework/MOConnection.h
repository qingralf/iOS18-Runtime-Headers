/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOConnection : NSObject {
    NSString * _name;
    unsigned long long  _pendingRequestCounter;
    NSMutableDictionary * _pendingRequests;
    id  _proxy;
}

- (void).cxx_destruct;
- (void)callBlock:(id /* block */)arg1 onInterruption:(id /* block */)arg2;
- (id)initWithName:(id)arg1;
- (id /* block */)onConnectionInterrupted;
- (bool)runBlockCompleted:(id)arg1;
- (id)runBlockStarted:(id /* block */)arg1 withConnectionError:(id /* block */)arg2;

@end