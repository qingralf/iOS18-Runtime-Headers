/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationPoolService : NSObject <FCNotificationPoolServiceType> {
    <FCContentVariantProviding> * _contentVariantProvider;
    <FCContentContext> * _context;
}

@property (nonatomic, readonly) <FCContentVariantProviding> *contentVariantProvider;
@property (nonatomic, readonly) <FCContentContext> *context;

- (void).cxx_destruct;
- (id)contentVariantProvider;
- (id)context;
- (void)fetchPoolWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 contentVariantProvider:(id)arg2;

@end
