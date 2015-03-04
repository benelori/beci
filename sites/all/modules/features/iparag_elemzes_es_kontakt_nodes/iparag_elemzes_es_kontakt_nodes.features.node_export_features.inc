<?php
/**
 * @file
 * iparag_elemzes_es_kontakt_nodes.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function iparag_elemzes_es_kontakt_nodes_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1210\',
      \'uid\' => \'3\',
      \'title\' => \'Kiss Alpár\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'dac7a4ca-0a83-4706-9ba4-4dd9b6e64d50\',
      \'nid\' => \'1210\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943327\',
      \'changed\' => \'1424943327\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'026b8404-337e-434f-965f-fada4c61c0c4\',
      \'revision_timestamp\' => \'1424943327\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Szenior\',
            \'format\' => NULL,
            \'safe_value\' => \'Szenior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Kiss Alpár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kiss Alpár\',
          ),
        ),
      ),
      \'title_original\' => \'Kiss Alpár\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943327\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1221\',
        \'source\' => \'node/1210\',
        \'alias\' => \'kiss-alpár-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1209\',
      \'uid\' => \'3\',
      \'title\' => \'Héjja Szabolcs\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b6d65d58-9367-4b74-a833-97e142d6ec49\',
      \'nid\' => \'1209\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943301\',
      \'changed\' => \'1424943301\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0b952254-42b1-4475-9139-6293b6af2b4e\',
      \'revision_timestamp\' => \'1424943301\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'hejjaszabolcs@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'hejjaszabolcs@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Nagyvárad\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagyvárad\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'OTP Leasing Romania\',
            \'format\' => NULL,
            \'safe_value\' => \'OTP Leasing Romania\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tiszteletbeli alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Tiszteletbeli alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040-745-168000\',
            \'format\' => NULL,
            \'safe_value\' => \'0040-745-168000\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Héjja Szabolcs\',
            \'format\' => NULL,
            \'safe_value\' => \'Héjja Szabolcs\',
          ),
        ),
      ),
      \'title_original\' => \'Héjja Szabolcs\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943301\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1220\',
        \'source\' => \'node/1209\',
        \'alias\' => \'héjja-szabolcs-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1192\',
      \'uid\' => \'3\',
      \'title\' => \'Ábrán Csilla\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2196c556-ee96-4c0b-aa85-ad416497f3b1\',
      \'nid\' => \'1192\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424870087\',
      \'changed\' => \'1424870087\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0dbaec60-97e9-4683-b8c7-2e1b1d9220d7\',
      \'revision_timestamp\' => \'1424870087\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'abrancsilla@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'abrancsilla@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Marosvásárhely\',
            \'format\' => NULL,
            \'safe_value\' => \'Marosvásárhely\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'MarsoRom\',
            \'format\' => NULL,
            \'safe_value\' => \'MarsoRom\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
            \'format\' => NULL,
            \'safe_value\' => \'2012\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040-751-603-463\',
            \'format\' => NULL,
            \'safe_value\' => \'0040-751-603-463\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Ábrán Csilla\',
            \'format\' => NULL,
            \'safe_value\' => \'Ábrán Csilla\',
          ),
        ),
      ),
      \'title_original\' => \'Ábrán Csilla\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424870087\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1203\',
        \'source\' => \'node/1192\',
        \'alias\' => \'ábrán-csilla-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1224\',
      \'uid\' => \'3\',
      \'title\' => \'Salamon Ádám\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'00a67bc5-1313-4796-95ec-908909bc3f3b\',
      \'nid\' => \'1224\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424944470\',
      \'changed\' => \'1424944470\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0ee432c5-cae9-4cbf-a9bb-389411334645\',
      \'revision_timestamp\' => \'1424944470\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Project Manager\',
            \'format\' => NULL,
            \'safe_value\' => \'Project Manager\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'adam.salamon@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'adam.salamon@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Internet banking, mobile banking, brokarage platformok\',
            \'format\' => NULL,
            \'safe_value\' => \'Internet banking, mobile banking, brokarage platformok\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>IND GROUP</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>IND GROUP</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügyi menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügyi menedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Misys\',
            \'format\' => NULL,
            \'safe_value\' => \'Misys\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
            \'format\' => NULL,
            \'safe_value\' => \'2011\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040-729-979847; 0036 70 4454 995\',
            \'format\' => NULL,
            \'safe_value\' => \'0040-729-979847; 0036 70 4454 995\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Salamon Ádám\',
            \'format\' => NULL,
            \'safe_value\' => \'Salamon Ádám\',
          ),
        ),
      ),
      \'title_original\' => \'Salamon Ádám\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424944470\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1235\',
        \'source\' => \'node/1224\',
        \'alias\' => \'salamon-ádám-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1264\',
      \'uid\' => \'3\',
      \'title\' => \'Pásztor Timea\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'dbfdba6b-4e70-4598-a442-c601856d7e5a\',
      \'nid\' => \'1264\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955744\',
      \'changed\' => \'1424955744\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0fcf4828-1497-4030-beef-b7abf9618e6d\',
      \'revision_timestamp\' => \'1424955744\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'menedzser aszisztens\',
            \'format\' => NULL,
            \'safe_value\' => \'menedzser aszisztens\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Bank és Pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Bank és Pénzügy\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ptimi21@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'ptimi21@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'könyvelés\',
            \'format\' => NULL,
            \'safe_value\' => \'könyvelés\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>OTP Bank</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>OTP Bank</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalatipénzügymenedzsment, Európai alapok könyvvizsgálata\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalatipénzügymenedzsment, Európai alapok könyvvizsgálata\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SRK\',
            \'format\' => NULL,
            \'safe_value\' => \'SRK\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'742824815\',
            \'format\' => NULL,
            \'safe_value\' => \'742824815\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Pásztor Timea\',
            \'format\' => NULL,
            \'safe_value\' => \'Pásztor Timea\',
          ),
        ),
      ),
      \'title_original\' => \'Pásztor Timea\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955744\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1276\',
        \'source\' => \'node/1264\',
        \'alias\' => \'pásztor-timea-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1212\',
      \'uid\' => \'3\',
      \'title\' => \'Laczkó Dénes\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fb6df3a6-3e42-44ae-be6e-6c46c37b6a85\',
      \'nid\' => \'1212\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943506\',
      \'changed\' => \'1424943506\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'12d0e29b-37c1-46e3-89ba-46063a7bd2c4\',
      \'revision_timestamp\' => \'1424943506\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Üzletág vezető\',
            \'format\' => NULL,
            \'safe_value\' => \'Üzletág vezető\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laczkodenes@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'laczkodenes@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Gumiabroncs kereskedelem és szervizhálózat\',
            \'format\' => NULL,
            \'safe_value\' => \'Gumiabroncs kereskedelem és szervizhálózat\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Bukarest\',
            \'format\' => NULL,
            \'safe_value\' => \'Bukarest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'MarsoRom\',
            \'format\' => NULL,
            \'safe_value\' => \'MarsoRom\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
            \'format\' => NULL,
            \'safe_value\' => \'2008\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0746-835.623\',
            \'format\' => NULL,
            \'safe_value\' => \'0746-835.623\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Laczkó Dénes\',
            \'format\' => NULL,
            \'safe_value\' => \'Laczkó Dénes\',
          ),
        ),
      ),
      \'title_original\' => \'Laczkó Dénes\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943506\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1223\',
        \'source\' => \'node/1212\',
        \'alias\' => \'laczkó-dénes-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1207\',
      \'uid\' => \'3\',
      \'title\' => \'Ferencz Katalin\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8f3b7009-a9e3-41cf-b937-1ecda19d0444\',
      \'nid\' => \'1207\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424942951\',
      \'changed\' => \'1424942951\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'26eccdec-d533-4cea-b30d-9368875580f5\',
      \'revision_timestamp\' => \'1424942951\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'gazdasági-pénzügyi vezető\',
            \'format\' => NULL,
            \'safe_value\' => \'gazdasági-pénzügyi vezető\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Nemzetközi kapcsolatok és európai tanulmányok, Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Nemzetközi kapcsolatok és európai tanulmányok, Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ferencz_kata@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'ferencz_kata@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'civil szervezetek\',
            \'format\' => NULL,
            \'safe_value\' => \'civil szervezetek\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Communitas Alapítvány\',
            \'format\' => NULL,
            \'safe_value\' => \'Communitas Alapítvány\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
            \'format\' => NULL,
            \'safe_value\' => \'2008\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0743-011225\',
            \'format\' => NULL,
            \'safe_value\' => \'0743-011225\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Ferencz Katalin\',
            \'format\' => NULL,
            \'safe_value\' => \'Ferencz Katalin\',
          ),
        ),
      ),
      \'title_original\' => \'Ferencz Katalin\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424942951\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1218\',
        \'source\' => \'node/1207\',
        \'alias\' => \'ferencz-katalin\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1225\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0673f4bf-5699-4992-8d16-3bc57c05c19a\',
      \'nid\' => \'1225\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424944564\',
      \'changed\' => \'1424944564\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'27694412-1954-4530-8eb3-7ef3f6d7446e\',
      \'revision_timestamp\' => \'1424944564\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'CEO\',
            \'format\' => NULL,
            \'safe_value\' => \'CEO\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Bank es penzugy\',
            \'format\' => NULL,
            \'safe_value\' => \'Bank es penzugy\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'szat17@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'szat17@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Media\',
            \'format\' => NULL,
            \'safe_value\' => \'Media\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Oriens IM, Paprika Latino/MTG Studios</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Oriens IM, Paprika Latino/MTG Studios</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Viasat Hungaria Zrt, MTG Broadcasting AB\',
            \'format\' => NULL,
            \'safe_value\' => \'Viasat Hungaria Zrt, MTG Broadcasting AB\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tiszteletbeli alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Tiszteletbeli alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0036 70 4218106\',
            \'format\' => NULL,
            \'safe_value\' => \'0036 70 4218106\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szabó András\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó András\',
          ),
        ),
      ),
      \'title_original\' => \'Szabó András\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424944564\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1236\',
        \'source\' => \'node/1225\',
        \'alias\' => \'szabó-andrás-1\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1194\',
      \'uid\' => \'3\',
      \'title\' => \'Bálint Tamás\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fb2ee571-d67c-4a27-bab5-8b562966d10c\',
      \'nid\' => \'1194\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424870453\',
      \'changed\' => \'1424870727\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3aba815f-1114-4d64-b431-9687c2131389\',
      \'revision_timestamp\' => \'1424870727\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'gazdasági elemző\',
            \'format\' => NULL,
            \'safe_value\' => \'gazdasági elemző\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'balintamas@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'balintamas@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ingatlanfejlesztés, turizmus, autó\',
            \'format\' => NULL,
            \'safe_value\' => \'ingatlanfejlesztés, turizmus, autó\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>EAST Consulting, DBR Holding, DBR Factor IFN</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>EAST Consulting, DBR Holding, DBR Factor IFN</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Székelyudvarhely\',
            \'format\' => NULL,
            \'safe_value\' => \'Székelyudvarhely\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Arkum Invest\',
            \'format\' => NULL,
            \'safe_value\' => \'Arkum Invest\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
            \'format\' => NULL,
            \'safe_value\' => \'2008\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0742-234504\',
            \'format\' => NULL,
            \'safe_value\' => \'0742-234504\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Bálint Tamás\',
            \'format\' => NULL,
            \'safe_value\' => \'Bálint Tamás\',
          ),
        ),
      ),
      \'title_original\' => \'Bálint Tamás\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424870453\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1205\',
        \'source\' => \'node/1194\',
        \'alias\' => \'bálint-tamás-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1200\',
      \'uid\' => \'3\',
      \'title\' => \'Románia Agrárstratégiája\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f16e8c37-826b-45d9-97e1-62b5817393a9\',
      \'nid\' => \'1200\',
      \'type\' => \'iparag_elemzes\',
      \'language\' => \'hu\',
      \'created\' => \'1424876944\',
      \'changed\' => \'1424876986\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3d318976-908b-47c8-81f4-3bee3ac79acf\',
      \'revision_timestamp\' => \'1424876986\',
      \'revision_uid\' => \'3\',
      \'field_elemzes\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1014\',
            \'uid\' => \'3\',
            \'filename\' => \'Agrarstrategia_teljes anyag_02.13.pdf\',
            \'uri\' => \'public://Agrarstrategia_teljes anyag_02.13.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'4552603\',
            \'status\' => \'1\',
            \'timestamp\' => \'1424876944\',
            \'type\' => \'default\',
            \'uuid\' => \'4f514eca-6fd4-4c6a-b188-0343a1cd397a\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424876944\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1211\',
        \'source\' => \'node/1200\',
        \'alias\' => \'románia-agrárstratégiája\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1193\',
      \'uid\' => \'3\',
      \'title\' => \'Albert Gáspár\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'52ab2513-37ba-4b94-a105-6e6ad7c2bd74\',
      \'nid\' => \'1193\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424870288\',
      \'changed\' => \'1424870288\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'46b1340c-cfd4-4502-bd45-a5c745cfc7c8\',
      \'revision_timestamp\' => \'1424870288\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Intern\',
            \'format\' => NULL,
            \'safe_value\' => \'Intern\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'albert.gaspar@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'albert.gaspar@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Gyógyszeripar\',
            \'format\' => NULL,
            \'safe_value\' => \'Gyógyszeripar\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Marosvásárhely\',
            \'format\' => NULL,
            \'safe_value\' => \'Marosvásárhely\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Boehringer Ingelheim Spain\',
            \'format\' => NULL,
            \'safe_value\' => \'Boehringer Ingelheim Spain\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
            \'format\' => NULL,
            \'safe_value\' => \'2013\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'+40746812626\',
            \'format\' => NULL,
            \'safe_value\' => \'+40746812626\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Albert Gáspár\',
            \'format\' => NULL,
            \'safe_value\' => \'Albert Gáspár\',
          ),
        ),
      ),
      \'title_original\' => \'Albert Gáspár\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424870288\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1204\',
        \'source\' => \'node/1193\',
        \'alias\' => \'albert-gáspár-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1270\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó S. Zsolt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cc25acd6-8953-40da-b9f1-754dcaadb763\',
      \'nid\' => \'1270\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956400\',
      \'changed\' => \'1424956400\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4909c70c-826b-4167-afc5-37abab642634\',
      \'revision_timestamp\' => \'1424956400\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'szaboszsolt93@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'szaboszsolt93@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'751014874\',
            \'format\' => NULL,
            \'safe_value\' => \'751014874\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szabó S. Zsolt\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó S. Zsolt\',
          ),
        ),
      ),
      \'title_original\' => \'Szabó S. Zsolt\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956400\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1282\',
        \'source\' => \'node/1270\',
        \'alias\' => \'szabó-s-zsolt-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1199\',
      \'uid\' => \'3\',
      \'title\' => \'Romániai gyógyszeripari elemzés\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0230537c-a376-46c7-b54e-841f2ddcb40e\',
      \'nid\' => \'1199\',
      \'type\' => \'iparag_elemzes\',
      \'language\' => \'hu\',
      \'created\' => \'1424876900\',
      \'changed\' => \'1424876900\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4b5663ee-c430-4517-bcc0-cdbc95819ab4\',
      \'revision_timestamp\' => \'1424876900\',
      \'revision_uid\' => \'3\',
      \'field_elemzes\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1013\',
            \'uid\' => \'3\',
            \'filename\' => \'Romaniai_gyogyszeripari_elemzes_0525.pdf\',
            \'uri\' => \'public://Romaniai_gyogyszeripari_elemzes_0525.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'1888742\',
            \'status\' => \'1\',
            \'timestamp\' => \'1424876900\',
            \'type\' => \'default\',
            \'uuid\' => \'3855065a-140a-48e5-8952-90ec063cd3d0\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424876900\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1210\',
        \'source\' => \'node/1199\',
        \'alias\' => \'romániai-gyógyszeripari-elemzés\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1262\',
      \'uid\' => \'3\',
      \'title\' => \'Guttmann Csongor István\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'62aab3d9-e577-494f-bf5d-e7ae1a7755c5\',
      \'nid\' => \'1262\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955637\',
      \'changed\' => \'1424955637\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4d963da3-f868-4658-bdc0-1b9471218358\',
      \'revision_timestamp\' => \'1424955637\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'guttmann_csongor@yahoo.de\',
            \'format\' => NULL,
            \'safe_value\' => \'guttmann_csongor@yahoo.de\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
            \'format\' => NULL,
            \'safe_value\' => \'2012\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'723528395\',
            \'format\' => NULL,
            \'safe_value\' => \'723528395\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Guttmann Csongor István\',
            \'format\' => NULL,
            \'safe_value\' => \'Guttmann Csongor István\',
          ),
        ),
      ),
      \'title_original\' => \'Guttmann Csongor István\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955637\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1274\',
        \'source\' => \'node/1262\',
        \'alias\' => \'guttmann-csongor-istván\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1196\',
      \'uid\' => \'3\',
      \'title\' => \'Baumgartner Mónika Melánia\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4f0ac4f5-b9f9-4008-9d06-d00b9baf278b\',
      \'nid\' => \'1196\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424871033\',
      \'changed\' => \'1424871033\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'55beed6f-8932-4e98-986f-a4811f944c15\',
      \'revision_timestamp\' => \'1424871033\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Elemző\',
            \'format\' => NULL,
            \'safe_value\' => \'Elemző\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'bmonikamelania@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'bmonikamelania@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tanácsadás\',
            \'format\' => NULL,
            \'safe_value\' => \'Tanácsadás\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Wolters Kluwer Financial Services</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Wolters Kluwer Financial Services</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'I-Insight\',
            \'format\' => NULL,
            \'safe_value\' => \'I-Insight\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
            \'format\' => NULL,
            \'safe_value\' => \'2011\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040-742-692985\',
            \'format\' => NULL,
            \'safe_value\' => \'0040-742-692985\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Baumgartner Mónika Melánia\',
            \'format\' => NULL,
            \'safe_value\' => \'Baumgartner Mónika Melánia\',
          ),
        ),
      ),
      \'title_original\' => \'Baumgartner Mónika Melánia\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424871033\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1207\',
        \'source\' => \'node/1196\',
        \'alias\' => \'baumgartner-mónika-melánia\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1269\',
      \'uid\' => \'3\',
      \'title\' => \'Gurzó Krisztina\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a2aa2387-27a7-49be-bfb4-8fc7f9b95ab4\',
      \'nid\' => \'1269\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956361\',
      \'changed\' => \'1424956361\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'56011114-b968-47c7-ac40-218cd600e461\',
      \'revision_timestamp\' => \'1424956361\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'gurzika_krisztina@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'gurzika_krisztina@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'747912453\',
            \'format\' => NULL,
            \'safe_value\' => \'747912453\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Gurzó Krisztina\',
            \'format\' => NULL,
            \'safe_value\' => \'Gurzó Krisztina\',
          ),
        ),
      ),
      \'title_original\' => \'Gurzó Krisztina\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956361\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1281\',
        \'source\' => \'node/1269\',
        \'alias\' => \'gurzó-krisztina-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1259\',
      \'uid\' => \'3\',
      \'title\' => \'Kovács Anita\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a3ed700e-8f99-4a87-89a9-c9eac0ec9de3\',
      \'nid\' => \'1259\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955530\',
      \'changed\' => \'1424955859\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5b8f7a46-76c4-404a-a153-550b61194c76\',
      \'revision_timestamp\' => \'1424955859\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy és bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy és bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ani_kovacs2006@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'ani_kovacs2006@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Szenior\',
            \'format\' => NULL,
            \'safe_value\' => \'Szenior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
            \'format\' => NULL,
            \'safe_value\' => \'2012\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40747286899\',
            \'format\' => NULL,
            \'safe_value\' => \'40747286899\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Kovács Anita\',
            \'format\' => NULL,
            \'safe_value\' => \'Kovács Anita\',
          ),
        ),
      ),
      \'title_original\' => \'Kovács Anita\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955530\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1271\',
        \'source\' => \'node/1259\',
        \'alias\' => \'kovács-anita-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1221\',
      \'uid\' => \'3\',
      \'title\' => \'Német Hunor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'baae1db5-db46-404e-bdb2-eb0d846eee31\',
      \'nid\' => \'1221\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424944188\',
      \'changed\' => \'1424944188\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5cb5ed1a-799c-49c5-9f3d-f11d87db8538\',
      \'revision_timestamp\' => \'1424944188\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'hunor.nemet@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'hunor.nemet@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
            \'format\' => NULL,
            \'safe_value\' => \'2012\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0743-437696\',
            \'format\' => NULL,
            \'safe_value\' => \'0743-437696\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Német Hunor\',
            \'format\' => NULL,
            \'safe_value\' => \'Német Hunor\',
          ),
        ),
      ),
      \'title_original\' => \'Német Hunor\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424944188\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1232\',
        \'source\' => \'node/1221\',
        \'alias\' => \'német-hunor-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1261\',
      \'uid\' => \'3\',
      \'title\' => \'Kerekes Zsuzsa\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'85a5441b-902a-4e72-8208-e743679a4bfd\',
      \'nid\' => \'1261\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955603\',
      \'changed\' => \'1424955941\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5d790e1a-b1ca-42a5-8f59-966c3225c19f\',
      \'revision_timestamp\' => \'1424955941\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'kerekes.zsuzsa.92@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'kerekes.zsuzsa.92@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
            \'format\' => NULL,
            \'safe_value\' => \'2013\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'747016695\',
            \'format\' => NULL,
            \'safe_value\' => \'747016695\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Kerekes Zsuzsa\',
            \'format\' => NULL,
            \'safe_value\' => \'Kerekes Zsuzsa\',
          ),
        ),
      ),
      \'title_original\' => \'Kerekes Zsuzsa\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955603\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1273\',
        \'source\' => \'node/1261\',
        \'alias\' => \'kerekes-zsuzsa-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1214\',
      \'uid\' => \'3\',
      \'title\' => \'László Timea\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9873eba1-12da-4e02-b50f-24ad5f1fff86\',
      \'nid\' => \'1214\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943598\',
      \'changed\' => \'1424943598\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5f02436e-82a1-419d-9ab5-78b8f6e67b76\',
      \'revision_timestamp\' => \'1424943598\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'controlling menedzser\',
            \'format\' => NULL,
            \'safe_value\' => \'controlling menedzser\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'laszlo.timea@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'laszlo.timea@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ingatlanfejlesztés,turizmus\',
            \'format\' => NULL,
            \'safe_value\' => \'ingatlanfejlesztés,turizmus\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Székelyudvarhely\',
            \'format\' => NULL,
            \'safe_value\' => \'Székelyudvarhely\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Arkum \',
            \'format\' => NULL,
            \'safe_value\' => \'Arkum \',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
            \'format\' => NULL,
            \'safe_value\' => \'2009\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0723-749979\',
            \'format\' => NULL,
            \'safe_value\' => \'0723-749979\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'László Timea\',
            \'format\' => NULL,
            \'safe_value\' => \'László Timea\',
          ),
        ),
      ),
      \'title_original\' => \'László Timea\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943598\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1225\',
        \'source\' => \'node/1214\',
        \'alias\' => \'lászló-timea-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1255\',
      \'uid\' => \'3\',
      \'title\' => \'Szász Levente\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'af288e94-e720-4a80-863e-fc7f924b5c09\',
      \'nid\' => \'1255\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955099\',
      \'changed\' => \'1424955099\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'63b6765f-23b4-42e6-8598-a76c90fcbe67\',
      \'revision_timestamp\' => \'1424955099\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'egyetemi adjunktus\',
            \'format\' => NULL,
            \'safe_value\' => \'egyetemi adjunktus\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank; Gazdasági informatika;\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank; Gazdasági informatika;\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'szasz.levente@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'szasz.levente@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'felsőoktatás\',
            \'format\' => NULL,
            \'safe_value\' => \'felsőoktatás\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>EAST Consulting partner</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>EAST Consulting partner</p>\\n",
          ),
        ),
      ),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy; Vállalkozásfejlesztési menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy; Vállalkozásfejlesztési menedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'BBTE, Közgazdaság- és Gazdálkodástudományi Magyar Intézet\',
            \'format\' => NULL,
            \'safe_value\' => \'BBTE, Közgazdaság- és Gazdálkodástudományi Magyar Intézet\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Koordinátor\',
            \'format\' => NULL,
            \'safe_value\' => \'Koordinátor\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
            \'format\' => NULL,
            \'safe_value\' => \'2008\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040-741-245688\',
            \'format\' => NULL,
            \'safe_value\' => \'0040-741-245688\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szász Levente\',
            \'format\' => NULL,
            \'safe_value\' => \'Szász Levente\',
          ),
        ),
      ),
      \'title_original\' => \'Szász Levente\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955099\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1267\',
        \'source\' => \'node/1255\',
        \'alias\' => \'szász-levente\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1195\',
      \'uid\' => \'3\',
      \'title\' => \'Balogh Szilamér\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'62780044-e8cf-4795-90bc-c2bb328b1dc9\',
      \'nid\' => \'1195\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424870892\',
      \'changed\' => \'1424870892\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6755a181-d074-4c39-bda8-3a970285ac60\',
      \'revision_timestamp\' => \'1424870892\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Strategic Account Manager Hungary & Romania \',
            \'format\' => NULL,
            \'safe_value\' => \'Strategic Account Manager Hungary &amp; Romania \',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Marketing\',
            \'format\' => NULL,
            \'safe_value\' => \'Marketing\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'baloghszilamer@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'baloghszilamer@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Irodabutor\',
            \'format\' => NULL,
            \'safe_value\' => \'Irodabutor\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>UPS Distribution, MarsoRom, East Consulting, FSP Group</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>UPS Distribution, MarsoRom, East Consulting, FSP Group</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Management of Business Development\',
            \'format\' => NULL,
            \'safe_value\' => \'Management of Business Development\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Steelcase\',
            \'format\' => NULL,
            \'safe_value\' => \'Steelcase\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tiszteletbeli Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Tiszteletbeli Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040-745-582166\',
            \'format\' => NULL,
            \'safe_value\' => \'0040-745-582166\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Balogh Szilamér\',
            \'format\' => NULL,
            \'safe_value\' => \'Balogh Szilamér\',
          ),
        ),
      ),
      \'title_original\' => \'Balogh Szilamér\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424870892\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1206\',
        \'source\' => \'node/1195\',
        \'alias\' => \'balogh-szilamér-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1254\',
      \'uid\' => \'3\',
      \'title\' => \'Szakács Szilárd\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d428a414-367d-40c4-8135-e23cc997d342\',
      \'nid\' => \'1254\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424954957\',
      \'changed\' => \'1424954957\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'67e2dc5b-f233-4eb9-8e8a-f5d17f4e5ca4\',
      \'revision_timestamp\' => \'1424954957\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Business Development Executive\',
            \'format\' => NULL,
            \'safe_value\' => \'Business Development Executive\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'szakacsWszilard@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'szakacsWszilard@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Bank, pénzügyi piacok, online kereskedés\',
            \'format\' => NULL,
            \'safe_value\' => \'Bank, pénzügyi piacok, online kereskedés\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Kárpátia Román-Magyar Kereskedelmi és Iparkamara, MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Kárpátia Román-Magyar Kereskedelmi és Iparkamara, MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Zürich\',
            \'format\' => NULL,
            \'safe_value\' => \'Zürich\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Projektmenedzsment és -értékelés\',
            \'format\' => NULL,
            \'safe_value\' => \'Projektmenedzsment és -értékelés\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Swissquote Bank AG\',
            \'format\' => NULL,
            \'safe_value\' => \'Swissquote Bank AG\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
            \'format\' => NULL,
            \'safe_value\' => \'2009\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0041 78 605 92 26\',
            \'format\' => NULL,
            \'safe_value\' => \'0041 78 605 92 26\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szakács Szilárd\',
            \'format\' => NULL,
            \'safe_value\' => \'Szakács Szilárd\',
          ),
        ),
      ),
      \'title_original\' => \'Szakács Szilárd\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424954957\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1266\',
        \'source\' => \'node/1254\',
        \'alias\' => \'szakács-szilárd-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1274\',
      \'uid\' => \'3\',
      \'title\' => \'Katona Edina\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cd5cd3c6-cbc9-40d6-b254-d32a9401583c\',
      \'nid\' => \'1274\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956573\',
      \'changed\' => \'1424956573\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'698efed7-fe63-48d5-a9a3-28bf91f73a18\',
      \'revision_timestamp\' => \'1424956573\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'edinaktn@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'edinaktn@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'743314551\',
            \'format\' => NULL,
            \'safe_value\' => \'743314551\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Katona Edina\',
            \'format\' => NULL,
            \'safe_value\' => \'Katona Edina\',
          ),
        ),
      ),
      \'title_original\' => \'Katona Edina\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956573\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1286\',
        \'source\' => \'node/1274\',
        \'alias\' => \'katona-edina-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1272\',
      \'uid\' => \'3\',
      \'title\' => \'Deák Levente\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f3bea980-40dc-4198-9fff-b98d379081f3\',
      \'nid\' => \'1272\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956492\',
      \'changed\' => \'1424956492\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6edd3ab9-5ff0-43fb-8e8a-023e6996d45f\',
      \'revision_timestamp\' => \'1424956492\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy és Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy és Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'lewentedeak@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'lewentedeak@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0747-921-773\',
            \'format\' => NULL,
            \'safe_value\' => \'0747-921-773\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Deák Levente\',
            \'format\' => NULL,
            \'safe_value\' => \'Deák Levente\',
          ),
        ),
      ),
      \'title_original\' => \'Deák Levente\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956492\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1284\',
        \'source\' => \'node/1272\',
        \'alias\' => \'deák-levente-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1256\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Krisztián\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8b956ef6-5b7d-4aab-b4ce-69b18e5802b2\',
      \'nid\' => \'1256\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955188\',
      \'changed\' => \'1424955188\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7387b186-d29f-4bf9-85e7-f4e7397853ce\',
      \'revision_timestamp\' => \'1424955188\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kereskedelmi igazgató\',
            \'format\' => NULL,
            \'safe_value\' => \'Kereskedelmi igazgató\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'sz.krisztian@magazinuldebaterii.ro\',
            \'format\' => NULL,
            \'safe_value\' => \'sz.krisztian@magazinuldebaterii.ro\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Autoipar, akkumulatorkereskedes\',
            \'format\' => NULL,
            \'safe_value\' => \'Autoipar, akkumulatorkereskedes\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Chimszed Invest SRL\',
            \'format\' => NULL,
            \'safe_value\' => \'Chimszed Invest SRL\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
            \'format\' => NULL,
            \'safe_value\' => \'2009\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0745 326 788\',
            \'format\' => NULL,
            \'safe_value\' => \'0745 326 788\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Székely Krisztián\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Krisztián\',
          ),
        ),
      ),
      \'title_original\' => \'Székely Krisztián\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955188\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1268\',
        \'source\' => \'node/1256\',
        \'alias\' => \'székely-krisztián-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1219\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy István\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'77833cf2-a772-41cd-b20b-b147aff9993e\',
      \'nid\' => \'1219\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424944085\',
      \'changed\' => \'1424944085\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'77b9fc94-edca-4a68-a01e-d19fb93786ee\',
      \'revision_timestamp\' => \'1424944085\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tiszteletbeli alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Tiszteletbeli alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy István\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy István\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy István\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424944085\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1230\',
        \'source\' => \'node/1219\',
        \'alias\' => \'nagy-istván\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1258\',
      \'uid\' => \'3\',
      \'title\' => \'Vincze Tamás\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b63a98ba-2d4f-4271-b28e-82ef64168d31\',
      \'nid\' => \'1258\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955463\',
      \'changed\' => \'1424955781\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'77dcdf3a-ed92-43cb-8932-cf55a825f711\',
      \'revision_timestamp\' => \'1424955781\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kereskedelmi igazgató\',
            \'format\' => NULL,
            \'safe_value\' => \'Kereskedelmi igazgató\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'vincze.tamas@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'vincze.tamas@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Gabona nagykereskedelem\',
            \'format\' => NULL,
            \'safe_value\' => \'Gabona nagykereskedelem\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Raiffeisen Bank</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Raiffeisen Bank</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügyi menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügyi menedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'East Grain\',
            \'format\' => NULL,
            \'safe_value\' => \'East Grain\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
            \'format\' => NULL,
            \'safe_value\' => \'2008\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40742583942\',
            \'format\' => NULL,
            \'safe_value\' => \'40742583942\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Vincze Tamás\',
            \'format\' => NULL,
            \'safe_value\' => \'Vincze Tamás\',
          ),
        ),
      ),
      \'title_original\' => \'Vincze Tamás\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955463\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1270\',
        \'source\' => \'node/1258\',
        \'alias\' => \'vincze-tamás-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1218\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Gábor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ed761402-a1b1-46b2-8c05-62a5c2a2c75d\',
      \'nid\' => \'1218\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424944044\',
      \'changed\' => \'1424944044\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'79435279-5d3f-4887-bdde-1a8de54cc699\',
      \'revision_timestamp\' => \'1424944044\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'projekt menedzser\',
            \'format\' => NULL,
            \'safe_value\' => \'projekt menedzser\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ngabika@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'ngabika@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'tanácsadás\',
            \'format\' => NULL,
            \'safe_value\' => \'tanácsadás\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Aktapa Ortopedica</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Aktapa Ortopedica</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Nagyvárad\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagyvárad\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'OTP Consulting Romania\',
            \'format\' => NULL,
            \'safe_value\' => \'OTP Consulting Romania\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tiszteletbeli alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Tiszteletbeli alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0745-218-418\',
            \'format\' => NULL,
            \'safe_value\' => \'0745-218-418\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy Gábor\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Gábor\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Gábor\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424944044\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1229\',
        \'source\' => \'node/1218\',
        \'alias\' => \'nagy-gábor\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1273\',
      \'uid\' => \'3\',
      \'title\' => \'Fodor Attila\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d92e14e9-6445-4072-83bd-cd29b34d43e7\',
      \'nid\' => \'1273\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956532\',
      \'changed\' => \'1424956532\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7dfbd3ff-7637-4a54-9631-f8bddde0d64a\',
      \'revision_timestamp\' => \'1424956532\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'attilafodor12@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'attilafodor12@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'741791013\',
            \'format\' => NULL,
            \'safe_value\' => \'741791013\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Fodor Attila\',
            \'format\' => NULL,
            \'safe_value\' => \'Fodor Attila\',
          ),
        ),
      ),
      \'title_original\' => \'Fodor Attila\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956532\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1285\',
        \'source\' => \'node/1273\',
        \'alias\' => \'fodor-attila-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1211\',
      \'uid\' => \'3\',
      \'title\' => \'Kristály Csaba\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'953df681-04cb-4263-8261-9a3cc56a2dd5\',
      \'nid\' => \'1211\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943408\',
      \'changed\' => \'1424943408\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'898e234e-168b-4bcd-8c4b-1833f9be818e\',
      \'revision_timestamp\' => \'1424943408\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Beszerző\',
            \'format\' => NULL,
            \'safe_value\' => \'Beszerző\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'kristalycsaba@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'kristalycsaba@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Olaj és Gáz\',
            \'format\' => NULL,
            \'safe_value\' => \'Olaj és Gáz\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Chimszed Invest, KPMG, Kerconsult</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Chimszed Invest, KPMG, Kerconsult</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'MOL Romania\',
            \'format\' => NULL,
            \'safe_value\' => \'MOL Romania\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
            \'format\' => NULL,
            \'safe_value\' => \'2011\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0743-096-350\',
            \'format\' => NULL,
            \'safe_value\' => \'0743-096-350\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Kristály Csaba\',
            \'format\' => NULL,
            \'safe_value\' => \'Kristály Csaba\',
          ),
        ),
      ),
      \'title_original\' => \'Kristály Csaba\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943408\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1222\',
        \'source\' => \'node/1211\',
        \'alias\' => \'kristály-csaba-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1263\',
      \'uid\' => \'3\',
      \'title\' => \'Fekete Réka\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e593b17e-6719-4f5c-95a6-4c3487937dec\',
      \'nid\' => \'1263\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955672\',
      \'changed\' => \'1424956040\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8d8649f4-b9f0-4ccd-a50b-913c6e3f753d\',
      \'revision_timestamp\' => \'1424956040\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'frekucy@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'frekucy@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
            \'format\' => NULL,
            \'safe_value\' => \'2013\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'752083282\',
            \'format\' => NULL,
            \'safe_value\' => \'752083282\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Fekete Réka\',
            \'format\' => NULL,
            \'safe_value\' => \'Fekete Réka\',
          ),
        ),
      ),
      \'title_original\' => \'Fekete Réka\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955672\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1275\',
        \'source\' => \'node/1263\',
        \'alias\' => \'fekete-réka-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1205\',
      \'uid\' => \'3\',
      \'title\' => \'Farkas Csongor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0f04b60b-2b7c-48be-9c5c-adc114b57568\',
      \'nid\' => \'1205\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424942662\',
      \'changed\' => \'1424942679\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8e2154fc-c2bf-4c99-89ee-138659d7e3be\',
      \'revision_timestamp\' => \'1424942679\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tanácsadó\',
            \'format\' => NULL,
            \'safe_value\' => \'Tanácsadó\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'farkascsongi@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'farkascsongi@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \' Vállalatirányítási, teljesítményoptimalizálási tanácsadás\',
            \'format\' => NULL,
            \'safe_value\' => \' Vállalatirányítási, teljesítményoptimalizálási tanácsadás\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Concorde Alapkezelő Zrt, Kárpátia Román-Magyar Kereskedelmi és Iparkamara</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Concorde Alapkezelő Zrt, Kárpátia Román-Magyar Kereskedelmi és Iparkamara</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'IFUA Horváth & Partners\',
            \'format\' => NULL,
            \'safe_value\' => \'IFUA Horváth &amp; Partners\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
            \'format\' => NULL,
            \'safe_value\' => \'2009\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'36308681675\',
            \'format\' => NULL,
            \'safe_value\' => \'36308681675\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Farkas Csongor\',
            \'format\' => NULL,
            \'safe_value\' => \'Farkas Csongor\',
          ),
        ),
      ),
      \'title_original\' => \'Farkas Csongor\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424942662\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1216\',
        \'source\' => \'node/1205\',
        \'alias\' => \'farkas-csongor-1\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1203\',
      \'uid\' => \'3\',
      \'title\' => \'Dorner Boglárka-Tamara\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9c0fbdf7-414e-4cd7-9f61-88f34860c5b4\',
      \'nid\' => \'1203\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424942444\',
      \'changed\' => \'1424942444\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'95e3f166-fd12-417c-ac13-7e2669d07f00\',
      \'revision_timestamp\' => \'1424942444\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment, Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment, Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'dornerboglarka@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'dornerboglarka@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Olaj és energiaipar\',
            \'format\' => NULL,
            \'safe_value\' => \'Olaj és energiaipar\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Ristoro Food Services; Solel Management</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ristoro Food Services; Solel Management</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Exxon Mobil\',
            \'format\' => NULL,
            \'safe_value\' => \'Exxon Mobil\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
            \'format\' => NULL,
            \'safe_value\' => \'2009\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0036-70-4267267; 0040-740-615589\',
            \'format\' => NULL,
            \'safe_value\' => \'0036-70-4267267; 0040-740-615589\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Dorner Boglárka-Tamara\',
            \'format\' => NULL,
            \'safe_value\' => \'Dorner Boglárka-Tamara\',
          ),
        ),
      ),
      \'title_original\' => \'Dorner Boglárka-Tamara\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424942444\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1214\',
        \'source\' => \'node/1203\',
        \'alias\' => \'dorner-boglárka-tamara-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1198\',
      \'uid\' => \'1\',
      \'title\' => \'Test iparag hu\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'abb4d67d-5d58-4f03-97b1-c274d41b53f8\',
      \'nid\' => \'1198\',
      \'type\' => \'iparag_elemzes\',
      \'language\' => \'hu\',
      \'created\' => \'1424873417\',
      \'changed\' => \'1424873417\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'97e360d4-6f14-4e8a-bde5-1700c5ba3dbd\',
      \'revision_timestamp\' => \'1424873417\',
      \'revision_uid\' => \'1\',
      \'field_elemzes\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1012\',
            \'uid\' => \'1\',
            \'filename\' => \'SESIUNE RESTANTE iarna 2015.pdf\',
            \'uri\' => \'public://SESIUNE RESTANTE iarna 2015.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'103051\',
            \'status\' => \'1\',
            \'timestamp\' => \'1424873417\',
            \'type\' => \'default\',
            \'uuid\' => \'301077f4-0817-42af-9eef-3c1e2404efeb\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424873417\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1209\',
        \'source\' => \'node/1198\',
        \'alias\' => \'test-iparag-hu\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1204\',
      \'uid\' => \'3\',
      \'title\' => \'Erdély Attila\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'70354dd6-943b-4420-a456-f00e64b82762\',
      \'nid\' => \'1204\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424942537\',
      \'changed\' => \'1424942537\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9849925b-cbe1-42c7-9bc2-5183d96b6493\',
      \'revision_timestamp\' => \'1424942537\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Finance Intern\',
            \'format\' => NULL,
            \'safe_value\' => \'Finance Intern\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment; Gazdasági Informatika\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment; Gazdasági Informatika\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Erdely.Attila@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'Erdely.Attila@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Adhesives; Laundry & Home Care; Beauty Care\',
            \'format\' => NULL,
            \'safe_value\' => \'Adhesives; Laundry &amp; Home Care; Beauty Care\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Heal Partners; Quinnipiac University; Shred-it</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Heal Partners; Quinnipiac University; Shred-it</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Hamden, CT, USA\',
            \'format\' => NULL,
            \'safe_value\' => \'Hamden, CT, USA\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment; Vállalati Pénzügyi Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment; Vállalati Pénzügyi Menedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Henkel North America\',
            \'format\' => NULL,
            \'safe_value\' => \'Henkel North America\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
            \'format\' => NULL,
            \'safe_value\' => \'2009\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1 203-873-1732\',
            \'format\' => NULL,
            \'safe_value\' => \'1 203-873-1732\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Erdély Attila\',
            \'format\' => NULL,
            \'safe_value\' => \'Erdély Attila\',
          ),
        ),
      ),
      \'title_original\' => \'Erdély Attila\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424942537\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1215\',
        \'source\' => \'node/1204\',
        \'alias\' => \'erdély-attila-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1206\',
      \'uid\' => \'3\',
      \'title\' => \'Ferencz Hunor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'30f3dff3-d037-4a87-9433-26b36f9f5915\',
      \'nid\' => \'1206\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424942872\',
      \'changed\' => \'1424942872\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a168cf14-c4c6-42f2-81e8-a81be45a0323\',
      \'revision_timestamp\' => \'1424942872\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzser asszisztens\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzser asszisztens\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'hunorferencz02@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'hunorferencz02@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Horeca\',
            \'format\' => NULL,
            \'safe_value\' => \'Horeca\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Zile si Nopti\',
            \'format\' => NULL,
            \'safe_value\' => \'Zile si Nopti\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
            \'format\' => NULL,
            \'safe_value\' => \'2010\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040-740099061\',
            \'format\' => NULL,
            \'safe_value\' => \'0040-740099061\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Ferencz Hunor\',
            \'format\' => NULL,
            \'safe_value\' => \'Ferencz Hunor\',
          ),
        ),
      ),
      \'title_original\' => \'Ferencz Hunor\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424942872\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1217\',
        \'source\' => \'node/1206\',
        \'alias\' => \'ferencz-hunor-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1217\',
      \'uid\' => \'3\',
      \'title\' => \'Márkos-Lukáts Mózes\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'952b41b1-2516-4805-bb69-11ad3a0c3ef1\',
      \'nid\' => \'1217\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943936\',
      \'changed\' => \'1424943936\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ac581212-0e12-4f74-9328-c8a6be3ebf40\',
      \'revision_timestamp\' => \'1424943936\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'markosmozes@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'markosmozes@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40749341093\',
            \'format\' => NULL,
            \'safe_value\' => \'40749341093\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Márkos-Lukáts Mózes\',
            \'format\' => NULL,
            \'safe_value\' => \'Márkos-Lukáts Mózes\',
          ),
        ),
      ),
      \'title_original\' => \'Márkos-Lukáts Mózes\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943936\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1228\',
        \'source\' => \'node/1217\',
        \'alias\' => \'márkos-lukáts-mózes-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1271\',
      \'uid\' => \'3\',
      \'title\' => \'Kerekes Gábor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4ef02e76-c1fd-4d0a-bcff-4ec95605ecc5\',
      \'nid\' => \'1271\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956453\',
      \'changed\' => \'1424956453\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ae9e2430-f4c7-4620-b0f1-08a2f26e5807\',
      \'revision_timestamp\' => \'1424956453\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'adminisztrátor\',
            \'format\' => NULL,
            \'safe_value\' => \'adminisztrátor\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'gaborkerekes2000@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'gaborkerekes2000@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pertinax Invest Srl.\',
            \'format\' => NULL,
            \'safe_value\' => \'Pertinax Invest Srl.\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'742262301\',
            \'format\' => NULL,
            \'safe_value\' => \'742262301\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Kerekes Gábor\',
            \'format\' => NULL,
            \'safe_value\' => \'Kerekes Gábor\',
          ),
        ),
      ),
      \'title_original\' => \'Kerekes Gábor\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956453\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1283\',
        \'source\' => \'node/1271\',
        \'alias\' => \'kerekes-gábor-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1216\',
      \'uid\' => \'3\',
      \'title\' => \'Lőrinczi Attila\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e2c52d5f-157d-4df4-a36e-932f49eaa6e2\',
      \'nid\' => \'1216\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943907\',
      \'changed\' => \'1424943907\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b18db45a-8160-4ad2-8ebc-76942801d8cc\',
      \'revision_timestamp\' => \'1424943907\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'gazdasági-pénzügyi vezető\',
            \'format\' => NULL,
            \'safe_value\' => \'gazdasági-pénzügyi vezető\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'attila_lorinczi84@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'attila_lorinczi84@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'élőállat (szarvasmarha) hízlalás/kereskedelem\',
            \'format\' => NULL,
            \'safe_value\' => \'élőállat (szarvasmarha) hízlalás/kereskedelem\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>EAST Consulting</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>EAST Consulting</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Bihar (Nagyvárad)\',
            \'format\' => NULL,
            \'safe_value\' => \'Bihar (Nagyvárad)\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Romespa\',
            \'format\' => NULL,
            \'safe_value\' => \'Romespa\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
            \'format\' => NULL,
            \'safe_value\' => \'2008\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0743-824061\',
            \'format\' => NULL,
            \'safe_value\' => \'0743-824061\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Lőrinczi Attila\',
            \'format\' => NULL,
            \'safe_value\' => \'Lőrinczi Attila\',
          ),
        ),
      ),
      \'title_original\' => \'Lőrinczi Attila\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943907\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1227\',
        \'source\' => \'node/1216\',
        \'alias\' => \'lőrinczi-attila-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1260\',
      \'uid\' => \'3\',
      \'title\' => \'Fehér Attila\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'74590091-04a0-4a4f-a0bf-e6de1190dfc5\',
      \'nid\' => \'1260\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955566\',
      \'changed\' => \'1424955890\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b1d6fb89-c18e-408b-a969-ac316f3f5799\',
      \'revision_timestamp\' => \'1424955890\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'attilafeher68@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'attilafeher68@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
            \'format\' => NULL,
            \'safe_value\' => \'2013\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'748927876\',
            \'format\' => NULL,
            \'safe_value\' => \'748927876\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Fehér Attila\',
            \'format\' => NULL,
            \'safe_value\' => \'Fehér Attila\',
          ),
        ),
      ),
      \'title_original\' => \'Fehér Attila\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955566\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1272\',
        \'source\' => \'node/1260\',
        \'alias\' => \'fehér-attila-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1191\',
      \'uid\' => \'3\',
      \'title\' => \'Ábrahám Krisztina\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d5f3b15f-d10f-4b18-a26c-302334209b19\',
      \'nid\' => \'1191\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424860944\',
      \'changed\' => \'1424860944\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b4a9bb12-d593-468d-a87d-d6f4a63a133f\',
      \'revision_timestamp\' => \'1424860944\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'junior belső üzleti tanácsadó \',
            \'format\' => NULL,
            \'safe_value\' => \'junior belső üzleti tanácsadó \',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'krisztina.abraham@yahoo.co.uk \',
            \'format\' => NULL,
            \'safe_value\' => \'krisztina.abraham@yahoo.co.uk \',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Energia\',
            \'format\' => NULL,
            \'safe_value\' => \'Energia\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>GTK</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>GTK</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Greenergy Hungary Holding\',
            \'format\' => NULL,
            \'safe_value\' => \'Greenergy Hungary Holding\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
            \'format\' => NULL,
            \'safe_value\' => \'2010\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0036 70 702 4006\',
            \'format\' => NULL,
            \'safe_value\' => \'0036 70 702 4006\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Ábrahám Krisztina\',
            \'format\' => NULL,
            \'safe_value\' => \'Ábrahám Krisztina\',
          ),
        ),
      ),
      \'title_original\' => \'Ábrahám Krisztina\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424860944\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1202\',
        \'source\' => \'node/1191\',
        \'alias\' => \'ábrahám-krisztina\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1197\',
      \'uid\' => \'3\',
      \'title\' => \'Benkő Zsolt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'90959e0a-5bce-458e-8bc9-c325dc635f64\',
      \'nid\' => \'1197\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424871233\',
      \'changed\' => \'1424871388\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ba8203bd-326c-4733-a91b-cb2cda8c6942\',
      \'revision_timestamp\' => \'1424871388\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'pénzügyi elemző\',
            \'format\' => NULL,
            \'safe_value\' => \'pénzügyi elemző\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'benko.zsolt@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'benko.zsolt@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'acéltermékek kereskedelme\',
            \'format\' => NULL,
            \'safe_value\' => \'acéltermékek kereskedelme\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>KPMG Audit Romania</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>KPMG Audit Romania</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Székelyudvarhely\',
            \'format\' => NULL,
            \'safe_value\' => \'Székelyudvarhely\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Melinda-Impex Steel\',
            \'format\' => NULL,
            \'safe_value\' => \'Melinda-Impex Steel\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
            \'format\' => NULL,
            \'safe_value\' => \'2010\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0765-218362 / 0753-736304\',
            \'format\' => NULL,
            \'safe_value\' => \'0765-218362 / 0753-736304\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Benkő Zsolt\',
            \'format\' => NULL,
            \'safe_value\' => \'Benkő Zsolt\',
          ),
        ),
      ),
      \'title_original\' => \'Benkő Zsolt\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424871233\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1208\',
        \'source\' => \'node/1197\',
        \'alias\' => \'benkő-zsolt-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1202\',
      \'uid\' => \'3\',
      \'title\' => \'Demeter Zselyke\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bc0f4051-1be1-4d1c-acdc-982013f8ad3b\',
      \'nid\' => \'1202\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424942305\',
      \'changed\' => \'1424942305\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'bf8d8605-1a76-4e3a-a709-ec8d06b7cae1\',
      \'revision_timestamp\' => \'1424942305\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'dzselyke@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'dzselyke@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
            \'format\' => NULL,
            \'safe_value\' => \'2011\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0742-900-992, 0036-205763678\',
            \'format\' => NULL,
            \'safe_value\' => \'0742-900-992, 0036-205763678\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Demeter Zselyke\',
            \'format\' => NULL,
            \'safe_value\' => \'Demeter Zselyke\',
          ),
        ),
      ),
      \'title_original\' => \'Demeter Zselyke\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424942305\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1213\',
        \'source\' => \'node/1202\',
        \'alias\' => \'demeter-zselyke-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1265\',
      \'uid\' => \'3\',
      \'title\' => \'Gábos Etelka\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'980b0bc2-e95a-464c-8587-7177abef95d9\',
      \'nid\' => \'1265\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956101\',
      \'changed\' => \'1424956101\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c9e22330-4d10-49f2-bd24-6f7c386e0601\',
      \'revision_timestamp\' => \'1424956101\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy és bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy és bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'etelka_gabos@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'etelka_gabos@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'751062302\',
            \'format\' => NULL,
            \'safe_value\' => \'751062302\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Gábos Etelka\',
            \'format\' => NULL,
            \'safe_value\' => \'Gábos Etelka\',
          ),
        ),
      ),
      \'title_original\' => \'Gábos Etelka\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956101\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1277\',
        \'source\' => \'node/1265\',
        \'alias\' => \'gábos-etelka-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1208\',
      \'uid\' => \'3\',
      \'title\' => \'Furdek Balázs Márton\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b5a027f6-74ac-4147-84d6-9afedfbda0c3\',
      \'nid\' => \'1208\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943016\',
      \'changed\' => \'1424943016\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d125795d-637b-4a6a-af9c-5849f62c8445\',
      \'revision_timestamp\' => \'1424943016\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'furdekbalazs16@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'furdekbalazs16@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
            \'format\' => NULL,
            \'safe_value\' => \'2010\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040-745-586776\',
            \'format\' => NULL,
            \'safe_value\' => \'0040-745-586776\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Furdek Balázs Márton\',
            \'format\' => NULL,
            \'safe_value\' => \'Furdek Balázs Márton\',
          ),
        ),
      ),
      \'title_original\' => \'Furdek Balázs Márton\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943016\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1219\',
        \'source\' => \'node/1208\',
        \'alias\' => \'furdek-balázs-márton-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1257\',
      \'uid\' => \'3\',
      \'title\' => \'Szőcs Kinga-Beáta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'754866c4-12de-4b6a-b138-ce3d48783fc2\',
      \'nid\' => \'1257\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424955293\',
      \'changed\' => \'1424955293\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d3c82593-41dd-46ef-994c-6191124b24d0\',
      \'revision_timestamp\' => \'1424955293\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Gazdasági Vezetőképző Program\',
            \'format\' => NULL,
            \'safe_value\' => \'Gazdasági Vezetőképző Program\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'szocskingabeata@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'szocskingabeata@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Agrár- és élelmiszeripar\',
            \'format\' => NULL,
            \'safe_value\' => \'Agrár- és élelmiszeripar\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MOL Nyrt., Vitacom Electronics</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MOL Nyrt., Vitacom Electronics</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalkozásmenedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalkozásmenedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Bonafarm Zrt. \',
            \'format\' => NULL,
            \'safe_value\' => \'Bonafarm Zrt. \',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
            \'format\' => NULL,
            \'safe_value\' => \'2009\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0036-70-235-8718; 0040-741-322630\',
            \'format\' => NULL,
            \'safe_value\' => \'0036-70-235-8718; 0040-741-322630\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szőcs Kinga-Beáta\',
            \'format\' => NULL,
            \'safe_value\' => \'Szőcs Kinga-Beáta\',
          ),
        ),
      ),
      \'title_original\' => \'Szőcs Kinga-Beáta\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424955293\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1269\',
        \'source\' => \'node/1257\',
        \'alias\' => \'szőcs-kinga-beáta\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1201\',
      \'uid\' => \'3\',
      \'title\' => \'Birton Réka\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c458dfa4-e3c0-4024-ab8e-4bd2c7889561\',
      \'nid\' => \'1201\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424941303\',
      \'changed\' => \'1424941303\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d51fa79f-49ec-44ae-b3e1-3a5936d03835\',
      \'revision_timestamp\' => \'1424941303\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Szenior elemző\',
            \'format\' => NULL,
            \'safe_value\' => \'Szenior elemző\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'birtonreka@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'birtonreka@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Magánbefektetési alapok, M&A tanácsadás\',
            \'format\' => NULL,
            \'safe_value\' => \'Magánbefektetési alapok, M&amp;A tanácsadás\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Deloitte</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Deloitte</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Budapest\',
            \'format\' => NULL,
            \'safe_value\' => \'Budapest\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Oriens Investment Management\',
            \'format\' => NULL,
            \'safe_value\' => \'Oriens Investment Management\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
            \'format\' => NULL,
            \'safe_value\' => \'2008\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0036 20 997 9939\',
            \'format\' => NULL,
            \'safe_value\' => \'0036 20 997 9939\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Birton Réka\',
            \'format\' => NULL,
            \'safe_value\' => \'Birton Réka\',
          ),
        ),
      ),
      \'title_original\' => \'Birton Réka\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424941303\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1212\',
        \'source\' => \'node/1201\',
        \'alias\' => \'birton-réka-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1268\',
      \'uid\' => \'3\',
      \'title\' => \'Kovács-Pusztai Bálint\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f7fb863d-e279-457a-86db-6303cb01b0e2\',
      \'nid\' => \'1268\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956314\',
      \'changed\' => \'1424956314\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d7225799-ad0e-4100-9e67-f6d5e40d609a\',
      \'revision_timestamp\' => \'1424956314\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy és bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy és bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'kovacs_balint90@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'kovacs_balint90@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'746175281\',
            \'format\' => NULL,
            \'safe_value\' => \'746175281\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Kovács-Pusztai Bálint\',
            \'format\' => NULL,
            \'safe_value\' => \'Kovács-Pusztai Bálint\',
          ),
        ),
      ),
      \'title_original\' => \'Kovács-Pusztai Bálint\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956314\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1280\',
        \'source\' => \'node/1268\',
        \'alias\' => \'kovács-pusztai-bálint-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1266\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Hunor Györk																																														Nagy Hunor Györk	\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a40a096c-0258-4f40-b970-16970085c118\',
      \'nid\' => \'1266\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956174\',
      \'changed\' => \'1424956219\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e56f9392-85e6-49fe-99e2-ff09a6bc873b\',
      \'revision_timestamp\' => \'1424956219\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment	\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment	\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'hunornagygy@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'hunornagygy@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0040726740001\',
            \'format\' => NULL,
            \'safe_value\' => \'0040726740001\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy Hunor Györk																																														Nagy Hunor Györk	\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Hunor Györk																																														Nagy Hunor Györk	\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Hunor Györk																																														Nagy Hunor Györk	\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956174\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1278\',
        \'source\' => \'node/1266\',
        \'alias\' => \'nagy-hunor-györk-nagy-hunor-györk\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1215\',
      \'uid\' => \'3\',
      \'title\' => \'Lőrincz Márta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'97c9475c-d498-494c-95b1-6f19b83abb45\',
      \'nid\' => \'1215\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943677\',
      \'changed\' => \'1424943677\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e997cd40-c01d-4bfa-aa9f-59c7f64f9621\',
      \'revision_timestamp\' => \'1424943677\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Business Controlling Intern\',
            \'format\' => NULL,
            \'safe_value\' => \'Business Controlling Intern\',
          ),
        ),
      ),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'martalorincz@ymail.com; marta.lorincz@quinnipiac.edu\',
            \'format\' => NULL,
            \'safe_value\' => \'martalorincz@ymail.com; marta.lorincz@quinnipiac.edu\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ragasztók, Háztartási tisztítószerek\',
            \'format\' => NULL,
            \'safe_value\' => \'Ragasztók, Háztartási tisztítószerek\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>FRSGlobal, Evalueserve</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>FRSGlobal, Evalueserve</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Hamden, CT, USA\',
            \'format\' => NULL,
            \'safe_value\' => \'Hamden, CT, USA\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Henkel North America\',
            \'format\' => NULL,
            \'safe_value\' => \'Henkel North America\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
            \'format\' => NULL,
            \'safe_value\' => \'2008\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1 203-804-2446\',
            \'format\' => NULL,
            \'safe_value\' => \'1 203-804-2446\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Lőrincz Márta\',
            \'format\' => NULL,
            \'safe_value\' => \'Lőrincz Márta\',
          ),
        ),
      ),
      \'title_original\' => \'Lőrincz Márta\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943677\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1226\',
        \'source\' => \'node/1215\',
        \'alias\' => \'lőrincz-márta-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1223\',
      \'uid\' => \'3\',
      \'title\' => \'Rákóczi Roland\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'32477dca-34b5-4753-95b0-5e243e3693c6\',
      \'nid\' => \'1223\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424944315\',
      \'changed\' => \'1424944315\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e9cce928-3913-4588-8393-52282d888b08\',
      \'revision_timestamp\' => \'1424944315\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Rákóczi Roland\',
            \'format\' => NULL,
            \'safe_value\' => \'Rákóczi Roland\',
          ),
        ),
      ),
      \'title_original\' => \'Rákóczi Roland\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424944315\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1234\',
        \'source\' => \'node/1223\',
        \'alias\' => \'rákóczi-roland-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1220\',
      \'uid\' => \'3\',
      \'title\' => \'Német Attila\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'aad4fd39-9cc2-47b3-91e3-e2cbf60d45ed\',
      \'nid\' => \'1220\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424944143\',
      \'changed\' => \'1424944143\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ebed572e-7246-42ad-a3bf-1e89e74e53d0\',
      \'revision_timestamp\' => \'1424944143\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'attilanemet@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'attilanemet@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Sepsiszentgyörgy\',
            \'format\' => NULL,
            \'safe_value\' => \'Sepsiszentgyörgy\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügy\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügy\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'OTP Consulting Romania\',
            \'format\' => NULL,
            \'safe_value\' => \'OTP Consulting Romania\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tiszteletbeli alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Tiszteletbeli alumni\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0742-298720\',
            \'format\' => NULL,
            \'safe_value\' => \'0742-298720\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Német Attila\',
            \'format\' => NULL,
            \'safe_value\' => \'Német Attila\',
          ),
        ),
      ),
      \'title_original\' => \'Német Attila\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424944143\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1231\',
        \'source\' => \'node/1220\',
        \'alias\' => \'német-attila\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1267\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Loránd\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fcf72df5-abff-4e3a-a327-be3e0f98b994\',
      \'nid\' => \'1267\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956267\',
      \'changed\' => \'1424956267\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ec092328-7c08-47b2-afe6-ba8399fbe1de\',
      \'revision_timestamp\' => \'1424956267\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'nagykakasi_nagy_lorand94@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'nagykakasi_nagy_lorand94@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
            \'format\' => NULL,
            \'safe_value\' => \'2014\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'730418112\',
            \'format\' => NULL,
            \'safe_value\' => \'730418112\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy Loránd\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Loránd\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Loránd\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956267\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1279\',
        \'source\' => \'node/1267\',
        \'alias\' => \'nagy-loránd-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1275\',
      \'uid\' => \'3\',
      \'title\' => \'Czirják Renáta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3d347f14-3e88-48be-8e9f-628548da66d6\',
      \'nid\' => \'1275\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424956638\',
      \'changed\' => \'1424956638\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f43241e0-a677-47dc-b3b2-7d05354d04f5\',
      \'revision_timestamp\' => \'1424956638\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Menedzsment\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'czirjakrenata@yahoo.com\',
            \'format\' => NULL,
            \'safe_value\' => \'czirjakrenata@yahoo.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Szenior\',
            \'format\' => NULL,
            \'safe_value\' => \'Szenior\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
            \'format\' => NULL,
            \'safe_value\' => \'2012\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0753-510.314\',
            \'format\' => NULL,
            \'safe_value\' => \'0753-510.314\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Czirják Renáta\',
            \'format\' => NULL,
            \'safe_value\' => \'Czirják Renáta\',
          ),
        ),
      ),
      \'title_original\' => \'Czirják Renáta\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424956638\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1287\',
        \'source\' => \'node/1275\',
        \'alias\' => \'czirják-renáta-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1213\',
      \'uid\' => \'3\',
      \'title\' => \'Lakatos Éva\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'84d9138b-28e1-4087-bd90-56e238b3f63d\',
      \'nid\' => \'1213\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424943525\',
      \'changed\' => \'1424943525\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fed3ce6b-0c2c-428e-b27f-6736f12af225\',
      \'revision_timestamp\' => \'1424943525\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(),
      \'field_email\' => array(),
      \'field_iparag\' => array(),
      \'field_korabbi_munkahelyek\' => array(),
      \'field_lakhely\' => array(),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(),
      \'field_munkahely\' => array(),
      \'field_statusz\' => array(),
      \'field_szenior_tagsag_kezdete\' => array(),
      \'field_tagsag_kezdete\' => array(),
      \'field_telefonszam\' => array(),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Lakatos Éva\',
            \'format\' => NULL,
            \'safe_value\' => \'Lakatos Éva\',
          ),
        ),
      ),
      \'title_original\' => \'Lakatos Éva\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424943525\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1224\',
        \'source\' => \'node/1213\',
        \'alias\' => \'lakatos-éva-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1222\',
      \'uid\' => \'3\',
      \'title\' => \'Rácz Béla\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'44fa91ef-286d-4089-b11e-8eb3c9511573\',
      \'nid\' => \'1222\',
      \'type\' => \'kontakt\',
      \'language\' => \'hu\',
      \'created\' => \'1424944283\',
      \'changed\' => \'1424944283\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ff2bfd5c-16fe-4694-98f9-c5233412c449\',
      \'revision_timestamp\' => \'1424944283\',
      \'revision_uid\' => \'3\',
      \'field_alumni_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
          ),
        ),
      ),
      \'field_betoltott_pozicio\' => array(),
      \'field_bsc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Pénzügy-Bank\',
            \'format\' => NULL,
            \'safe_value\' => \'Pénzügy-Bank\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'value\' => \'raczbela@gmail.com\',
            \'format\' => NULL,
            \'safe_value\' => \'raczbela@gmail.com\',
          ),
        ),
      ),
      \'field_iparag\' => array(
        \'und\' => array(
          array(
            \'value\' => \'felsőoktatás\',
            \'format\' => NULL,
            \'safe_value\' => \'felsőoktatás\',
          ),
        ),
      ),
      \'field_korabbi_munkahelyek\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_lakhely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Kolozsvár\',
            \'format\' => NULL,
            \'safe_value\' => \'Kolozsvár\',
          ),
        ),
      ),
      \'field_megjegyzes\' => array(),
      \'field_msc_szakirany\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Vállalati pénzügyi menedzsment\',
            \'format\' => NULL,
            \'safe_value\' => \'Vállalati pénzügyi menedzsment\',
          ),
        ),
      ),
      \'field_munkahely\' => array(
        \'und\' => array(
          array(
            \'value\' => \'BBTE, Közgazdaság- és Gazdálkodástudományi Magyar Intézet\',
            \'format\' => NULL,
            \'safe_value\' => \'BBTE, Közgazdaság- és Gazdálkodástudományi Magyar Intézet\',
          ),
        ),
      ),
      \'field_statusz\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Koordinátor\',
            \'format\' => NULL,
            \'safe_value\' => \'Koordinátor\',
          ),
        ),
      ),
      \'field_szenior_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2010\',
          ),
        ),
      ),
      \'field_tagsag_kezdete\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
            \'format\' => NULL,
            \'safe_value\' => \'2009\',
          ),
        ),
      ),
      \'field_telefonszam\' => array(
        \'und\' => array(
          array(
            \'value\' => \'40741040072\',
            \'format\' => NULL,
            \'safe_value\' => \'40741040072\',
          ),
        ),
      ),
      \'field_tovabbi_informacio\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Rácz Béla\',
            \'format\' => NULL,
            \'safe_value\' => \'Rácz Béla\',
          ),
        ),
      ),
      \'title_original\' => \'Rácz Béla\',
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424944283\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1233\',
        \'source\' => \'node/1222\',
        \'alias\' => \'rácz-béla\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
