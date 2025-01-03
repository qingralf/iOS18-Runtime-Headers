/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFOpenURLOperationDelegate : NSObject <LSOpenResourceOperationDelegate> {
    id /* block */  _completionHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didFinishWithSuccess:(bool)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;

@end
