/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
 */

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing> {
    <CRSServing> * _service;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initializeServiceWithClass:(Class)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serviceIdentifier;
- (id)underlyingService;

@end
