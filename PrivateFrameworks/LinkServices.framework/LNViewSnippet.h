/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNViewSnippet : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _snippetModelBundleIdentifier;
    NSData * _snippetModelData;
    NSString * _targetBundleIdentifier;
    NSData * _viewData;
    LNViewSnippetOptions * _viewSnippetOptions;
}

@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *snippetModelBundleIdentifier;
@property (nonatomic, readonly, copy) NSData *snippetModelData;
@property (nonatomic, readonly, copy) NSString *targetBundleIdentifier;
@property (nonatomic, readonly, copy) NSData *viewData;
@property (nonatomic, readonly, copy) LNViewSnippetOptions *viewSnippetOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContainerBundleIdentifier:(id)arg1 targetBundleIdentifier:(id)arg2 viewData:(id)arg3 snippetModelData:(id)arg4 snippetModelBundleIdentifier:(id)arg5 viewSnippetOptions:(id)arg6;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerBundleIdentifier:(id)arg1 targetBundleIdentifier:(id)arg2 snippetModelData:(id)arg3;
- (id)initWithContainerBundleIdentifier:(id)arg1 targetBundleIdentifier:(id)arg2 snippetModelData:(id)arg3 snippetModelBundleIdentifier:(id)arg4;
- (id)initWithContainerBundleIdentifier:(id)arg1 targetBundleIdentifier:(id)arg2 snippetModelData:(id)arg3 snippetModelBundleIdentifier:(id)arg4 viewSnippetOptions:(id)arg5;
- (id)initWithContainerBundleIdentifier:(id)arg1 targetBundleIdentifier:(id)arg2 viewData:(id)arg3;
- (id)initWithContainerBundleIdentifier:(id)arg1 targetBundleIdentifier:(id)arg2 viewData:(id)arg3 viewSnippetOptions:(id)arg4;
- (id)snippetModelBundleIdentifier;
- (id)snippetModelData;
- (id)targetBundleIdentifier;
- (id)viewData;
- (id)viewSnippetOptions;

@end