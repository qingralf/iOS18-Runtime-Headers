/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassActionViewModel : NSObject <NSCopying, PKIdentifiable> {
    PKPaymentPassAction * _action;
    NSString * _identifier;
    bool  _isInPreflight;
}

@property (nonatomic, readonly) PKPaymentPassAction *action;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool isInPreflight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInPreflight;
- (void)setIsInPreflight:(bool)arg1;

@end
