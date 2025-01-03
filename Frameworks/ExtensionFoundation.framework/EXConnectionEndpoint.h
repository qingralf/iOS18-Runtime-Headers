/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface EXConnectionEndpoint : NSObject <NSSecureCoding> {
    void bsServiceConnectionEndpoint;
    void identifier;
    void xpcEndpoint;
}

@property (nonatomic, readonly) BSServiceConnectionEndpoint *bsServiceConnectionEndpoint;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, retain) <OS_xpc_object> *xpcEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bsServiceConnectionEndpoint;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bsServiceConnectionEndpoint:(id)arg2;
- (id)initWithIdentifier:(id)arg1 xpcEndpoint:(id)arg2;
- (id)service;
- (void)setXpcEndpoint:(id)arg1;
- (id)xpcEndpoint;

@end
