/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliChatBotOrgDetails : NSObject <NSCopying, NSSecureCoding> {
    CTLazuliChatBotCategoryList * _categoryList;
    CTLazuliChatBotCommunicationAddress * _communicationAddress;
    CTLazuliChatBotMediaList * _mediaList;
    CTLazuliChatBotOrgDescription * _orgDescription;
    CTLazuliChatBotOrgName * _orgName;
    CTLazuliChatBotWebResources * _webResources;
}

@property (nonatomic, retain) CTLazuliChatBotCategoryList *categoryList;
@property (nonatomic, retain) CTLazuliChatBotCommunicationAddress *communicationAddress;
@property (nonatomic, retain) CTLazuliChatBotMediaList *mediaList;
@property (nonatomic, retain) CTLazuliChatBotOrgDescription *orgDescription;
@property (nonatomic, retain) CTLazuliChatBotOrgName *orgName;
@property (nonatomic, retain) CTLazuliChatBotWebResources *webResources;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryList;
- (id)communicationAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliChatBotOrgDetails:(id)arg1;
- (id)mediaList;
- (id)orgDescription;
- (id)orgName;
- (void)setCategoryList:(id)arg1;
- (void)setCommunicationAddress:(id)arg1;
- (void)setMediaList:(id)arg1;
- (void)setOrgDescription:(id)arg1;
- (void)setOrgName:(id)arg1;
- (void)setWebResources:(id)arg1;
- (id)webResources;

@end