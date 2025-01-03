/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding> {
    NSNumber * _authenticatedAccountIdentifier;
    long long  _performedButtonIndex;
    NSURL * _redirectURL;
    long long  _selectedButtonIndex;
}

@property (nonatomic, copy) NSNumber *authenticatedAccountIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long performedButtonIndex;
@property (nonatomic, copy) NSURL *redirectURL;
@property (nonatomic) long long selectedButtonIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticatedAccountIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)performedButtonIndex;
- (id)redirectURL;
- (long long)selectedButtonIndex;
- (void)setAuthenticatedAccountIdentifier:(id)arg1;
- (void)setPerformedButtonIndex:(long long)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setSelectedButtonIndex:(long long)arg1;

@end
