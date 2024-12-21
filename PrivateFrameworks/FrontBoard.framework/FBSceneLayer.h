/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneLayer : NSObject <BSDescriptionProviding, NSCopying> {
    long long  _alignment;
    unsigned int  _contextID;
    double  _level;
    FBSSceneIdentityToken * _proxiedKeyboardOwner;
    long long  _type;
}

@property (nonatomic) long long alignment;
@property (nonatomic, readonly) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *externalSceneID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isKeyboardLayer;
@property (nonatomic, readonly) bool isKeyboardProxyLayer;
@property (nonatomic) double level;
@property (nonatomic, readonly, copy) FBSSceneIdentityToken *proxiedKeyboardOwner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)layerWithFBSSceneLayer:(id)arg1;

- (void).cxx_destruct;
- (long long)alignment;
- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)externalSceneID;
- (unsigned long long)hash;
- (id)init;
- (id)initAsKeyboard;
- (id)initAsKeyboardProxyWithOwner:(id)arg1;
- (id)initWithContextID:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKeyboardLayer;
- (bool)isKeyboardProxyLayer;
- (double)level;
- (id)proxiedKeyboardOwner;
- (void)setAlignment:(long long)arg1;
- (void)setLevel:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end