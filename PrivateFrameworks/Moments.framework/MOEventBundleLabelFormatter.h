/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOEventBundleLabelFormatter : NSObject {
    NSDictionary * _context;
    NSString * _templatePath;
    NSDictionary * _templates;
}

@property (nonatomic, readonly) NSDictionary *context;
@property (nonatomic, readonly) NSDictionary *templates;

- (void).cxx_destruct;
- (id)context;
- (id)formattedBundleLabelsForMetaData:(id)arg1 bundleType:(id)arg2;
- (id)formattedBundlePromptsForMetaData:(id)arg1 bundleType:(id)arg2;
- (id)formattedStringsForMetaData:(id)arg1 templateType:(id)arg2 bundleType:(id)arg3;
- (id)formattedStringsForMetaData:(id)arg1 templates:(id)arg2;
- (id)getContextForBundleType:(id)arg1;
- (id)getTemplateDirectoryURL;
- (id)init;
- (id)initWithTemplatePath:(id)arg1;
- (id)initWithUniverse:(id)arg1;
- (id)keywordForTemplateType:(id)arg1 bundleType:(id)arg2;
- (id)loadDictionaryFromPath:(id)arg1;
- (void)loadLabelTemplates;
- (void)loadLabelTemplatesFromDirectory:(id)arg1;
- (void)logDiagnoticsInformation;
- (id)shuffleStrings:(id)arg1 shuffleMode:(unsigned long long)arg2;
- (id)templates;

@end