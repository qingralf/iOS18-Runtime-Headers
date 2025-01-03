/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSTonePurchase : SSPurchase <NSCopying, NSSecureCoding, SSXPCCoding> {
    NSArray * _allowedToneStyles;
    NSString * _assigneeContactIdentifier;
    NSNumber * _assigneeIdentifier;
    NSString * _assigneeToneStyle;
    bool  _shouldMakeDefaultRingtone;
    bool  _shouldMakeDefaultTextTone;
}

@property (copy) NSArray *allowedToneStyles;
@property (retain) NSString *assigneeContactIdentifier;
@property (retain) NSNumber *assigneeIdentifier;
@property (copy) NSString *assigneeToneStyle;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool shouldMakeDefaultRingtone;
@property bool shouldMakeDefaultTextTone;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (id)allowedToneStyles;
- (id)assigneeContactIdentifier;
- (id)assigneeIdentifier;
- (id)assigneeToneStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAllowedToneStyles:(id)arg1;
- (void)setAssigneeContactIdentifier:(id)arg1;
- (void)setAssigneeIdentifier:(id)arg1;
- (void)setAssigneeToneStyle:(id)arg1;
- (void)setShouldMakeDefaultRingtone:(bool)arg1;
- (void)setShouldMakeDefaultTextTone:(bool)arg1;
- (bool)shouldMakeDefaultRingtone;
- (bool)shouldMakeDefaultTextTone;

@end
