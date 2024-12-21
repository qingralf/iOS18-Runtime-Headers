/* Generated by RuntimeBrowser.
 */

@protocol VISObjectSelectionConfig <NSObject>

@required

- (float)bounding_box_padding_for_cropping;
- (bool)enable_object_selection;
- (bool)enable_text_state_selection;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)max_number_of_text_entities;
- (void)setBounding_box_padding_for_cropping:(float)arg1;
- (void)setEnable_object_selection:(bool)arg1;
- (void)setEnable_text_state_selection:(bool)arg1;
- (void)setMax_number_of_text_entities:(int)arg1;
- (void)setText_book_world_distance_threshold:(float)arg1;
- (void)setUnknown_label_threshold:(float)arg1;
- (float)text_book_world_distance_threshold;
- (float)unknown_label_threshold;

@end