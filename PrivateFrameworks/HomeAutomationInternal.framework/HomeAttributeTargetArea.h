/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal
 */

@interface HomeAttributeTargetArea : INObject

@property (nonatomic) long long areaID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long mapID;
@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
