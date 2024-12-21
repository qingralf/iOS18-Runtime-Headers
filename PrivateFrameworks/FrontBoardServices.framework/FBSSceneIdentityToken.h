/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneIdentityToken : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    BSServiceConnectionEndpoint * _endpoint;
    int  _host;
    NSString * _identifier;
    NSString * _stringRepresentation;
    RBSProcessIdentity * _target;
    NSString * _workspace;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) BSServiceConnectionEndpoint *hostEndpoint;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;
@property (readonly) Class superclass;

+ (id)pseudoTokenWithIdentifier:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)tokenWithHostEndpoint:(id)arg1 workspace:(id)arg2 identifier:(id)arg3;
+ (id)tokenWithHostPID:(int)arg1 directEndpointTarget:(id)arg2 workspace:(id)arg3 identifier:(id)arg4;
+ (id)tokenWithHostPID:(int)arg1 viewServiceSessionIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)hostEndpoint;
- (id)identifier;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)stringRepresentation;

@end