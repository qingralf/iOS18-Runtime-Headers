/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterUIFoundation.framework/PosterUIFoundation
 */

@interface PUIStylePickerConfiguration : NSObject <BSDescriptionStreaming, NSCopying, NSMutableCopying, NSSecureCoding> {
    PUIStylePickerComponents * _components;
    double  _defaultContentsLuminance;
    NSString * _defaultRole;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _edgeInsets;
    PUIStylePickerHomeScreenConfiguration * _homeScreenConfiguration;
    NSString * _previewTextString;
    PUIStyleConfiguration * _styleConfiguration;
    PUITextLayoutConfiguration * _textLayoutConfiguration;
}

@property (nonatomic, copy) PUIStylePickerComponents *components;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) double defaultContentsLuminance;
@property (nonatomic, retain) NSString *defaultRole;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) PUIStylePickerHomeScreenConfiguration *homeScreenConfiguration;
@property (nonatomic, copy) NSString *previewTextString;
@property (nonatomic, copy) PUIStyleConfiguration *styleConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, copy) PUITextLayoutConfiguration *textLayoutConfiguration;

+ (id)defaultStylePickerConfigurationForRole:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToStream:(id)arg1;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultContentsLuminance;
- (id)defaultRole;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeScreenConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviewTextString:(id)arg1 defaultRole:(id)arg2 components:(id)arg3 defaultContentsLuminance:(double)arg4 styleConfiguration:(id)arg5 textLayoutConfiguration:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStylePickerConfiguration:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)previewTextString;
- (void)setComponents:(id)arg1;
- (void)setDefaultContentsLuminance:(double)arg1;
- (void)setDefaultRole:(id)arg1;
- (void)setEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHomeScreenConfiguration:(id)arg1;
- (void)setPreviewTextString:(id)arg1;
- (void)setStyleConfiguration:(id)arg1;
- (void)setTextLayoutConfiguration:(id)arg1;
- (id)styleConfiguration;
- (id)textLayoutConfiguration;

@end
