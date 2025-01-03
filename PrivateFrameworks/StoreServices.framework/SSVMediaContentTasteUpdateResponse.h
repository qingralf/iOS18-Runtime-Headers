/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteUpdateResponse : NSObject <NSSecureCoding, SSXPCCoding> {
    bool  _cachedResponse;
    NSArray * _contentTasteItems;
    NSDate * _expirationDate;
    unsigned long long  _responseRevisionID;
}

@property (getter=isCachedResponse, nonatomic) bool cachedResponse;
@property (nonatomic, copy) NSArray *contentTasteItems;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long responseRevisionID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentTasteItems;
- (id)copyXPCEncoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isCachedResponse;
- (unsigned long long)responseRevisionID;
- (void)setCachedResponse:(bool)arg1;
- (void)setContentTasteItems:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setResponseRevisionID:(unsigned long long)arg1;

@end
