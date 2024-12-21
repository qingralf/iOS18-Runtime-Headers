/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/AutomaticAssessmentConfiguration
 */

@interface AEAssessmentParticipantConfiguration : NSObject <NSCopying> {
    bool  _allowsNetworkAccess;
    NSDictionary * _configurationInfo;
}

@property (nonatomic) bool allowsNetworkAccess;
@property (nonatomic, copy) NSDictionary *configurationInfo;

+ (id)instanceFromIndividualConfiguration:(id)arg1;
+ (id)new;

- (void).cxx_destruct;
- (bool)allowsNetworkAccess;
- (id)configurationInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)individualConfiguration;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAllowsNetworkAccess:(bool)arg1;
- (void)setConfigurationInfo:(id)arg1;

@end