/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformLibrary.framework/IntelligencePlatformLibrary
 */

@interface CCHomeContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    CCHomeAccessory * _accessory;
    unsigned int  _entityType;
    CCHome * _home;
    CCHomeRoom * _room;
    CCHomeScene * _scene;
    CCHomeService * _service;
    CCHomeServiceGroup * _serviceGroup;
    CCHomeTrigger * _trigger;
    CCHomeZone * _zone;
}

@property (nonatomic, readonly) CCHomeAccessory *accessory;
@property (nonatomic, readonly) unsigned int entityType;
@property (nonatomic, readonly) CCHome *home;
@property (nonatomic, readonly) CCHomeRoom *room;
@property (nonatomic, readonly) CCHomeScene *scene;
@property (nonatomic, readonly) CCHomeService *service;
@property (nonatomic, readonly) CCHomeServiceGroup *serviceGroup;
@property (nonatomic, readonly) CCHomeTrigger *trigger;
@property (nonatomic, readonly) CCHomeZone *zone;

+ (Class)contentMessageClass;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemType;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)accessory;
- (unsigned int)entityType;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1 parentFieldType:(unsigned short)arg2;
- (id)home;
- (id)initWithEntity:(id)arg1 entityType:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)jsonDictionary;
- (id)room;
- (id)scene;
- (id)service;
- (id)serviceGroup;
- (id)trigger;
- (id)zone;

@end