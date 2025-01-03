/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDismissalPreventionAssertion : NSObject <PKInvalidatable> {
    bool  _invalidated;
    id /* block */  _invalidationHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithInvalidationHandler:(id /* block */)arg1;
- (void)invalidate;
- (bool)isInvalidated;

@end
