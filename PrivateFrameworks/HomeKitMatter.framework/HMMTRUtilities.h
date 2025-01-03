/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRUtilities : HMFObject

+ (id)__baseClusterValueForAttributeDeviceListFromReadValue:(id)arg1 forIdentify:(id)arg2;
+ (id)_pathOfMTRClusterReadValue:(id)arg1;
+ (id)caseAuthenticatedTagWithIdentifier:(unsigned short)arg1 version:(unsigned short)arg2;
+ (bool)compareUnorderedUniqueNumberArray:(id)arg1 withArray:(id)arg2;
+ (id)dateToMatterEpoch:(id)arg1;
+ (id)encodeObject:(id)arg1;
+ (id)hmmtr_shortTypeFromUUID:(id)arg1;
+ (id)identifierStringWithCHIPNodeID:(id)arg1;
+ (bool)isValidCATSubject:(id)arg1;
+ (id)matterEpochToDate:(id)arg1;
+ (id)mtrAuthModeAsString:(id)arg1;
+ (id)mtrBaseClusterValueFromMTRClusterReadResultValue:(id)arg1 clusterIdentifier:(id)arg2 attributeIdentifier:(id)arg3 forIdentify:(id)arg4;
+ (id)mtrBaseClusterValueFromMTRClusterReadResultValue:(id)arg1 forIdentify:(id)arg2;
+ (id)mtrBaseClusterValueFromMTRClusterReportValue:(id)arg1;
+ (id)mtrPrivilegeAsString:(id)arg1;
+ (long long)nextServiceInstanceID:(long long)arg1 previousCharacteristicsCount:(unsigned long long)arg2;
+ (void)parseCaseAuthenticatedTag:(id)arg1 identifier:(unsigned short*)arg2 version:(unsigned short*)arg3;
+ (void)printAccessControlList:(id)arg1;
+ (unsigned short)randomCASEAuthenticatedTagIdentifier;
+ (long long)randomDiscriminator;
+ (unsigned long long)randomNodeID;
+ (id)sanitizeHAPName:(id)arg1;
+ (id)setupIDFromSetupCode:(id)arg1 discriminator:(id)arg2;

@end
