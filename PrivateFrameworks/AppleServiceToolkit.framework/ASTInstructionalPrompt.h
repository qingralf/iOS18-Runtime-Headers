/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTInstructionalPrompt : NSObject <NSSecureCoding> {
    NSString * _iconLocator;
    NSNumber * _identifier;
    NSArray * _imageLocators;
    NSArray * _instructions;
    long long  _instructionsStyle;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    NSArray * _options;
    long long  _type;
}

@property (nonatomic, retain) NSString *iconLocator;
@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, retain) NSArray *imageLocators;
@property (nonatomic, retain) NSArray *instructions;
@property (nonatomic) long long instructionsStyle;
@property (nonatomic, retain) NSString *localizedSubtitle;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, retain) NSArray *options;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)iconLocator;
- (id)identifier;
- (id)imageLocators;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 type:(long long)arg2 iconLocator:(id)arg3 localizedTitle:(id)arg4 localizedSubtitle:(id)arg5 imageLocators:(id)arg6 instructions:(id)arg7 instructionsStyle:(long long)arg8 options:(id)arg9;
- (id)initWithID:(id)arg1 type:(long long)arg2 iconLocator:(id)arg3 localizedTitle:(id)arg4 localizedSubtitle:(id)arg5 imageLocators:(id)arg6 instructions:(id)arg7 options:(id)arg8;
- (id)initWithID:(id)arg1 type:(long long)arg2 imageLocators:(id)arg3 instructions:(id)arg4 options:(id)arg5;
- (id)instructions;
- (long long)instructionsStyle;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)options;
- (void)setIconLocator:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageLocators:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setInstructionsStyle:(long long)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end