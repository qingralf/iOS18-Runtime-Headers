/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ServiceExtensions.framework/ServiceExtensions
 */

@interface _SEServiceConfiguration : NSObject {
    void interruptionHandler;
    void serviceIdentifier;
}

@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) NSString *serviceIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceIdentifier:(id)arg1;
- (id /* block */)interruptionHandler;
- (id)serviceIdentifier;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setServiceIdentifier:(id)arg1;

@end
