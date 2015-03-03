<?php
/**
 * @file
 * event_calendar_nodes.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function event_calendar_nodes_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1231\',
      \'uid\' => \'1\',
      \'title\' => \'Kolozsvári Egyetemista Esettanulmány Verseny 2015\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3700fc0e-f30e-4938-9936-e5bb386de02c\',
      \'nid\' => \'1231\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952572\',
      \'changed\' => \'1424960849\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'05283853-c8ee-4e71-8881-5a18c2dd6fe9\',
      \'revision_timestamp\' => \'1424960849\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "A Babeş-Bolyai Tudományegyetem, Közgazdaság- és Gazdálkodástudományi Kar (BBTE KGTK) Magyar Intézete és a Pro Oeconomica Egyesület szervezésében, 2015. március 8-án kerül megrendezésre a kar alapképzéses és mesteris hallgatói számára kiírt Kolozsvári Egyetemista Esettanulmány Verseny (KEEV 2015) döntője. A kolozsvári esettanulmányozás történetében ez már a 20. esettanulmány megoldó verseny.\\r\\nBővebben: http://hu.econ.ubbcluj.ro/hirek/indul-a-kolozsvari-egyetemista-esettanulmany-verseny-2015",
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => "A Babeş-Bolyai Tudományegyetem, Közgazdaság- és Gazdálkodástudományi Kar (BBTE KGTK) Magyar Intézete és a Pro Oeconomica Egyesület szervezésében, 2015. március 8-án kerül megrendezésre a kar alapképzéses és mesteris hallgatói számára kiírt Kolozsvári Egyetemista Esettanulmány Verseny (KEEV 2015) döntője. A kolozsvári esettanulmányozás történetében ez már a 20. esettanulmány megoldó verseny.\\r\\nBővebben: http://hu.econ.ubbcluj.ro/hirek/indul-a-kolozsvari-egyetemista-esettanulmany-verseny-2015",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-02 14:15:00\',
            \'value2\' => \'2015-03-08 17:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952572\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1243\',
        \'source\' => \'node/1231\',
        \'alias\' => \'kolozsvári-egyetemista-esettanulmány-verseny-2015\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1237\',
      \'uid\' => \'1\',
      \'title\' => \'Beszélgetés aktuális gazdasági témákról\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5afa0817-fcf4-46f1-ab4d-17ca5bcef83f\',
      \'nid\' => \'1237\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952892\',
      \'changed\' => \'1424961177\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'103d9ddc-f3e6-49aa-aca9-addab1689712\',
      \'revision_timestamp\' => \'1424961177\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-23 19:00:00\',
            \'value2\' => \'2015-03-23 20:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952892\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1249\',
        \'source\' => \'node/1237\',
        \'alias\' => \'ujsagcikk-beci-1\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1279\',
      \'uid\' => \'3\',
      \'title\' => \'Deschiderea semestrului\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'74ddfc64-e109-4057-903a-cd1d82b14dfa\',
      \'nid\' => \'1279\',
      \'type\' => \'event_calendar\',
      \'language\' => \'ro\',
      \'created\' => \'1424963995\',
      \'changed\' => \'1424963995\',
      \'tnid\' => \'1227\',
      \'translate\' => \'0\',
      \'uuid\' => \'1fd0d943-c455-47cf-817d-81ce777146b5\',
      \'revision_timestamp\' => \'1424963995\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-02-23 18:00:00\',
            \'value2\' => \'2015-02-23 19:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424963995\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1291\',
        \'source\' => \'node/1279\',
        \'alias\' => \'deschiderea-semestrului\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1247\',
      \'uid\' => \'1\',
      \'title\' => \'Kristály Csaba: excel képzés\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'03f19be6-0263-409f-80dd-b21c61743248\',
      \'nid\' => \'1247\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953729\',
      \'changed\' => \'1424962231\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'26dbd9fb-5e79-4abe-abf2-9c282eb42062\',
      \'revision_timestamp\' => \'1424962231\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-25 10:00:00\',
            \'value2\' => \'2015-04-25 16:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953729\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1259\',
        \'source\' => \'node/1247\',
        \'alias\' => \'kristály-csaba-excel-képzés\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1244\',
      \'uid\' => \'1\',
      \'title\' => \'Kádár Magor: érveléstechnika II. \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'02169ad4-aaa0-4724-bfd5-79b1217c72f9\',
      \'nid\' => \'1244\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953617\',
      \'changed\' => \'1424962078\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2724ba99-b95c-4daa-b12c-9f242eee0535\',
      \'revision_timestamp\' => \'1424962078\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Amiről szó lesz:\\r\\n- érvelési arhitektúrák, strukturálás\\r\\n- gyakorlati érvelési és retorikai fogások\\r\\n- esettanulmány és mintaállítás\\r\\n- egyéni elemzés, korrigálás\\r\\n- NLP-technikák\\r\\n- szakanyag-feldolgozás, linkek az esettanulmányokhoz",
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => "Amiről szó lesz:\\r\\n- érvelési arhitektúrák, strukturálás\\r\\n- gyakorlati érvelési és retorikai fogások\\r\\n- esettanulmány és mintaállítás\\r\\n- egyéni elemzés, korrigálás\\r\\n- NLP-technikák\\r\\n- szakanyag-feldolgozás, linkek az esettanulmányokhoz",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-16 17:00:00\',
            \'value2\' => \'2015-04-16 20:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953617\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1256\',
        \'source\' => \'node/1244\',
        \'alias\' => \'kádár-magor-érveléstechnika-ii\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1230\',
      \'uid\' => \'1\',
      \'title\' => \'Kiss Gyöngyvér: Stílustanácsadás tréning\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9a39f163-7b10-4569-8ac3-5517c986e9f9\',
      \'nid\' => \'1230\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952508\',
      \'changed\' => \'1424961070\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'27c4ad36-af36-41bb-b167-05671485e7ab\',
      \'revision_timestamp\' => \'1424961070\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Gyorstalpaló a következőkről:\\r\\n- hogy kell eseményeken megjelenni;\\r\\n- mire kell odafigyelni amikor összeválogatják a ruhatárukat;\\r\\n- melyek azok az alapdarabok ami mindenképpen kell;\\r\\n- mit mivel lehet és mit nem;\\r\\n- kinek mi előnyös.\\r\\n",
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => "Gyorstalpaló a következőkről:\\r\\n- hogy kell eseményeken megjelenni;\\r\\n- mire kell odafigyelni amikor összeválogatják a ruhatárukat;\\r\\n- melyek azok az alapdarabok ami mindenképpen kell;\\r\\n- mit mivel lehet és mit nem;\\r\\n- kinek mi előnyös.\\r\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-03 18:00:00\',
            \'value2\' => \'2015-03-03 21:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952508\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1242\',
        \'source\' => \'node/1230\',
        \'alias\' => \'kiss-gyöngyvér-stílustanácsadás-tréning\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1248\',
      \'uid\' => \'1\',
      \'title\' => \'BCG Strategy Cup?\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d598ab28-d1a8-4f5a-8628-ed306d55803b\',
      \'nid\' => \'1248\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953789\',
      \'changed\' => \'1424953789\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2ae8adae-4f20-4d8c-ad25-a0d8e9497644\',
      \'revision_timestamp\' => \'1424953789\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-25 15:30:00\',
            \'value2\' => \'2015-04-25 17:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953789\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1260\',
        \'source\' => \'node/1248\',
        \'alias\' => \'bcg-strategy-cup\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1232\',
      \'uid\' => \'1\',
      \'title\' => \'Beszélgetés aktuális gazdasági témákról\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'707d1120-cf71-4fc9-85b4-90142ff68f3d\',
      \'nid\' => \'1232\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952625\',
      \'changed\' => \'1424961141\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3f77e8b0-c4aa-466e-b4c5-9846eee0f50e\',
      \'revision_timestamp\' => \'1424961141\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-09 19:00:00\',
            \'value2\' => \'2015-03-09 20:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952625\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1244\',
        \'source\' => \'node/1232\',
        \'alias\' => \'ujsagcikk-beci-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1253\',
      \'uid\' => \'1\',
      \'title\' => \'ETDK\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'11527b8b-d634-4a9a-ac67-4a9dc7b612ef\',
      \'nid\' => \'1253\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424954047\',
      \'changed\' => \'1424954047\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'41b10631-35bd-42f7-add1-5a4e093fcc86\',
      \'revision_timestamp\' => \'1424954047\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-05-21 14:30:00\',
            \'value2\' => \'2015-05-24 16:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424954047\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1265\',
        \'source\' => \'node/1253\',
        \'alias\' => \'etdk\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1276\',
      \'uid\' => \'3\',
      \'title\' => \'Kádár Magor: nonverbális kommunikáció II. \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3fcc87e5-08df-4177-9baf-14e7b3202620\',
      \'nid\' => \'1276\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424961443\',
      \'changed\' => \'1424961443\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5ee90bf6-6c0f-4f9e-b065-62cacebaacf4\',
      \'revision_timestamp\' => \'1424961443\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Amiről szó lesz:\\r\\n- jelalkotás\\r\\n- jelolvasási technikák elmélyítése\\r\\n- mikorókifejezések-teszt\\r\\n- manipulációs technikák\\r\\n- feladat: saját gesztusrendszer-fejlesztése\\r\\n- verbális érvelés és nonverbális meggyőzés szinergiája",
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => "Amiről szó lesz:\\r\\n- jelalkotás\\r\\n- jelolvasási technikák elmélyítése\\r\\n- mikorókifejezések-teszt\\r\\n- manipulációs technikák\\r\\n- feladat: saját gesztusrendszer-fejlesztése\\r\\n- verbális érvelés és nonverbális meggyőzés szinergiája",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-18 17:00:00\',
            \'value2\' => \'2015-03-18 20:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424961443\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1288\',
        \'source\' => \'node/1276\',
        \'alias\' => \'kádár-magor-nonverbális-kommunikáció-ii\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1240\',
      \'uid\' => \'1\',
      \'title\' => \'Rácz Béla: kontrolling II.\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a829a69a-d1a1-4692-ad42-8651573133b6\',
      \'nid\' => \'1240\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953180\',
      \'changed\' => \'1424961807\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5f4fbf0c-3206-4011-b7aa-20e67b0160e7\',
      \'revision_timestamp\' => \'1424961807\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-30 18:00:00\',
            \'value2\' => \'2015-03-30 21:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953180\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1252\',
        \'source\' => \'node/1240\',
        \'alias\' => \'rácz-béla-kontrolling-ii\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1235\',
      \'uid\' => \'1\',
      \'title\' => \'Rácz Béla: kontrolling és Excel képzés\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5b090aab-5232-4542-a003-8c523b1a4a4f\',
      \'nid\' => \'1235\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952790\',
      \'changed\' => \'1424961576\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'603cb839-5dc3-479b-8948-6d1c53a6e7e2\',
      \'revision_timestamp\' => \'1424961576\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-20 15:00:00\',
            \'value2\' => \'2015-03-21 15:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952790\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1247\',
        \'source\' => \'node/1235\',
        \'alias\' => \'rácz-béla-kontrolling-és-excel-képzés\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1246\',
      \'uid\' => \'1\',
      \'title\' => \'Esetmegoldás bemutató angol nyelven\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fbc7fd51-d29f-48a2-9d51-443525652d7a\',
      \'nid\' => \'1246\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953690\',
      \'changed\' => \'1424962188\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6751900d-7550-4877-aab2-b54f5d7e985d\',
      \'revision_timestamp\' => \'1424962188\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-29 18:30:00\',
            \'value2\' => \'2015-04-29 20:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953690\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1258\',
        \'source\' => \'node/1246\',
        \'alias\' => \'esetmegoldás-bemutató-angol-nyelven\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1243\',
      \'uid\' => \'1\',
      \'title\' => \'Beszélgetés aktuális gazdasági témákról\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9613f85b-d647-4fd8-aea1-0ca54b48e5fb\',
      \'nid\' => \'1243\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953582\',
      \'changed\' => \'1424962003\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6e187d7e-bd8e-4e7d-aeb9-f12a959b7e24\',
      \'revision_timestamp\' => \'1424962003\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-13 19:00:00\',
            \'value2\' => \'2015-04-13 20:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953582\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1255\',
        \'source\' => \'node/1243\',
        \'alias\' => \'újságcikk-béci-2\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1252\',
      \'uid\' => \'1\',
      \'title\' => \'Kádár Magor: konfliktushelyzetek feloldása \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'15d219bf-08ce-42b2-8a78-f2b971f85c20\',
      \'nid\' => \'1252\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953999\',
      \'changed\' => \'1424962351\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'73de633a-dd76-4df4-b2d0-766ebe7df033\',
      \'revision_timestamp\' => \'1424962351\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Amiről szó lesz:\\r\\n- a verbális agresszió, passzív-agresszív hozzáállás és annak kezelése\\r\\n- önismeret, reakciókészség fejlesztése\\r\\n- teszt: konfliktuskerülés és -keresés, asszertivitás-teszt.\\r\\n- feladat: reakciók monitorizálása",
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => "Amiről szó lesz:\\r\\n- a verbális agresszió, passzív-agresszív hozzáállás és annak kezelése\\r\\n- önismeret, reakciókészség fejlesztése\\r\\n- teszt: konfliktuskerülés és -keresés, asszertivitás-teszt.\\r\\n- feladat: reakciók monitorizálása",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-05-14 17:30:00\',
            \'value2\' => \'2015-05-16 21:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953999\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1264\',
        \'source\' => \'node/1252\',
        \'alias\' => \'kádár-magor-konfliktushelyzetek-feloldása\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1234\',
      \'uid\' => \'1\',
      \'title\' => \'Kádár Magor: nonverbális kommunikáció I. \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f57f8a4a-c3dc-44c1-86eb-a33e88dd22a1\',
      \'nid\' => \'1234\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952716\',
      \'changed\' => \'1424961317\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'92462798-c5f1-417e-bfa2-af130cb2882d\',
      \'revision_timestamp\' => \'1424961317\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Amiről szó lesz:\\r\\n- ismétlés és átkötés az első félévben tanultakra\\r\\n- nonverbális csatornák, üzenetelemzés\\r\\n- érzések, attitűdük, magatartások leolvasása\\r\\n- hallgatóság elemzése: jelek, módszerek, példák\\r\\n- feladat: jelenet-elemzés",
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => "Amiről szó lesz:\\r\\n- ismétlés és átkötés az első félévben tanultakra\\r\\n- nonverbális csatornák, üzenetelemzés\\r\\n- érzések, attitűdük, magatartások leolvasása\\r\\n- hallgatóság elemzése: jelek, módszerek, példák\\r\\n- feladat: jelenet-elemzés",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-12 17:00:00\',
            \'value2\' => \'2015-03-12 20:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952716\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1246\',
        \'source\' => \'node/1234\',
        \'alias\' => \'kádár-magor-nonverbális-kommunikáció-i\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1238\',
      \'uid\' => \'1\',
      \'title\' => \'Garamhegyi Ábel: vállalatvezetés\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'07c1082b-8505-4bfa-a107-e3a7b4695c40\',
      \'nid\' => \'1238\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952923\',
      \'changed\' => \'1424961669\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'94fd599b-173a-40c9-82ac-af55049f5437\',
      \'revision_timestamp\' => \'1424961669\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-24 14:15:00\',
            \'value2\' => \'2015-03-24 15:15:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952923\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1250\',
        \'source\' => \'node/1238\',
        \'alias\' => \'garamhegyi-ábel-vállalatvezetés\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1227\',
      \'uid\' => \'1\',
      \'title\' => \'Félévnyitó találkozó\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'426d386a-39a3-42a6-9f19-31f1be185320\',
      \'nid\' => \'1227\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952195\',
      \'changed\' => \'1424964056\',
      \'tnid\' => \'1227\',
      \'translate\' => \'0\',
      \'uuid\' => \'a8da3f84-7600-496d-8abc-bb437b312175\',
      \'revision_timestamp\' => \'1424964056\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Félévnyitó találkozó. Napirenden: programismertetés, iparág ismertetés. \',
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => \'Félévnyitó találkozó. Napirenden: programismertetés, iparág ismertetés. \',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-02-23 18:00:00\',
            \'value2\' => \'2015-02-23 19:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952195\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1239\',
        \'source\' => \'node/1227\',
        \'alias\' => \'félévnyitó-találkozó\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1251\',
      \'uid\' => \'1\',
      \'title\' => \'Beszélgetés aktuális gazdasági témákról\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9af506dd-913c-4c12-8567-8124ec42646e\',
      \'nid\' => \'1251\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953952\',
      \'changed\' => \'1424962276\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b029d55f-c711-41db-aacc-ebd51e32ae6d\',
      \'revision_timestamp\' => \'1424962276\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-05-11 19:30:00\',
            \'value2\' => \'2015-05-11 20:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953952\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1263\',
        \'source\' => \'node/1251\',
        \'alias\' => \'ujsagcikk-beci-3\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1277\',
      \'uid\' => \'3\',
      \'title\' => \'Zárónap\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'05cb0589-656f-4a86-a370-a9d0dad2d8d3\',
      \'nid\' => \'1277\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424962408\',
      \'changed\' => \'1424962408\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b75b042d-f697-4825-900f-fe30f77e90b1\',
      \'revision_timestamp\' => \'1424962408\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-06-05 15:00:00\',
            \'value2\' => \'2015-06-06 18:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424962408\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1289\',
        \'source\' => \'node/1277\',
        \'alias\' => \'zárónap\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1229\',
      \'uid\' => \'1\',
      \'title\' => \'Malcolm Gillies: Cities, Nations and Super-states: Crises of Authority\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b3b04e2f-97dd-4138-ac06-41284d3d097e\',
      \'nid\' => \'1229\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952432\',
      \'changed\' => \'1424960570\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b8c7fd69-a61e-48c6-9365-297992152d42\',
      \'revision_timestamp\' => \'1424960570\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Professor Malcolm Gillies, distinguished researcher and former rector of the Metropolitan University, gives his lecture on how the power structures changes or would change in the 21st century.\',
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => \'Professor Malcolm Gillies, distinguished researcher and former rector of the Metropolitan University, gives his lecture on how the power structures changes or would change in the 21st century.\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-02-27 18:00:00\',
            \'value2\' => \'2015-02-28 14:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952432\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1241\',
        \'source\' => \'node/1229\',
        \'alias\' => \'malcolm-gillies-cities-nations-and-super-states-crises-authority\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1245\',
      \'uid\' => \'1\',
      \'title\' => \'HBCS: esetmegoldó képzés\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'34333cba-656b-4275-bd19-be2538033154\',
      \'nid\' => \'1245\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953656\',
      \'changed\' => \'1424962121\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c0c316ab-b18d-40b4-b579-4d2bd8ce4ce8\',
      \'revision_timestamp\' => \'1424962121\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-18 09:30:00\',
            \'value2\' => \'2015-04-19 18:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953656\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1257\',
        \'source\' => \'node/1245\',
        \'alias\' => \'hbcs-esetmegoldó-képzés\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1242\',
      \'uid\' => \'1\',
      \'title\' => \'OTDK\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0e1d5125-66ec-4e34-b0b7-c93242b2faf5\',
      \'nid\' => \'1242\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953412\',
      \'changed\' => \'1424953412\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ced1d8da-8297-4134-8222-fe925a2ca79d\',
      \'revision_timestamp\' => \'1424953412\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-09 14:30:00\',
            \'value2\' => \'2015-04-12 18:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953412\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1254\',
        \'source\' => \'node/1242\',
        \'alias\' => \'otdk\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1249\',
      \'uid\' => \'1\',
      \'title\' => \'ETDK leadás\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8a79c75f-92af-4f96-8c46-d97bf76ff7f1\',
      \'nid\' => \'1249\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953837\',
      \'changed\' => \'1424953837\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ceebb892-8e5b-4eaf-ba49-9dafe3bb77b4\',
      \'revision_timestamp\' => \'1424953837\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-26 14:30:00\',
            \'value2\' => \'2015-04-26 17:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953837\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1261\',
        \'source\' => \'node/1249\',
        \'alias\' => \'etdk-leadás\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1250\',
      \'uid\' => \'1\',
      \'title\' => \'Miskolc?\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'45ce6df2-37b5-4bc9-a2d0-8d18ff1e682f\',
      \'nid\' => \'1250\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953905\',
      \'changed\' => \'1424953905\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'cf607170-c1e3-4202-9e8a-1f33571eb781\',
      \'revision_timestamp\' => \'1424953905\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-26 16:30:00\',
            \'value2\' => \'2015-04-26 17:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953905\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1262\',
        \'source\' => \'node/1250\',
        \'alias\' => \'miskolc\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1239\',
      \'uid\' => \'1\',
      \'title\' => \'Albert Júlia: beszédtechnika\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c4a929c0-9a28-42b1-9b70-d8ca37fa818d\',
      \'nid\' => \'1239\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952946\',
      \'changed\' => \'1424961756\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e5883735-6ab7-4326-bc09-e59a1bba6e56\',
      \'revision_timestamp\' => \'1424961756\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Amiről szó lesz:\\r\\n- légzéstechnikai gyakorlatok\\r\\n- kiejtés, beszéd a nyilvánosság előtt\\r\\n- egyéni beszédtechnikai szokások, stílusok értékelése\\r\\n- feladat: egyéni beszédtechnikai gyakorlatok végzése",
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => "Amiről szó lesz:\\r\\n- légzéstechnikai gyakorlatok\\r\\n- kiejtés, beszéd a nyilvánosság előtt\\r\\n- egyéni beszédtechnikai szokások, stílusok értékelése\\r\\n- feladat: egyéni beszédtechnikai gyakorlatok végzése",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-26 14:15:00\',
            \'value2\' => \'2015-03-26 17:15:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952946\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1251\',
        \'source\' => \'node/1239\',
        \'alias\' => \'albert-júlia-beszédtechnika\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1236\',
      \'uid\' => \'1\',
      \'title\' => \'OEV\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'23b3de42-d9c0-406e-82c4-1d19067b63df\',
      \'nid\' => \'1236\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952827\',
      \'changed\' => \'1424952846\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e84530f5-030e-47a9-98a1-5d70c3861e17\',
      \'revision_timestamp\' => \'1424952846\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-21 14:15:00\',
            \'value2\' => \'2015-03-23 12:15:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952827\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1248\',
        \'source\' => \'node/1236\',
        \'alias\' => \'oev\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1228\',
      \'uid\' => \'1\',
      \'title\' => \'Esetoldó bemutató- magyar nyelven\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'78ceaeba-0301-44f9-9d9a-f26ad8155a33\',
      \'nid\' => \'1228\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952244\',
      \'changed\' => \'1424960751\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ee22cac0-8a2a-4034-b237-099ef117436b\',
      \'revision_timestamp\' => \'1424960751\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'msg systems Romania esettanulmány megoldásának bemutatása.\',
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => \'msg systems Romania esettanulmány megoldásának bemutatása.\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-02-26 19:00:00\',
            \'value2\' => \'2015-02-26 21:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952244\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1240\',
        \'source\' => \'node/1228\',
        \'alias\' => \'esetoldó-bemutató-magyar-nyelven\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1278\',
      \'uid\' => \'3\',
      \'title\' => \'Semester opening meeting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bf774c83-533f-4217-b963-933ac61539e5\',
      \'nid\' => \'1278\',
      \'type\' => \'event_calendar\',
      \'language\' => \'en\',
      \'created\' => \'1424963904\',
      \'changed\' => \'1424963904\',
      \'tnid\' => \'1227\',
      \'translate\' => \'0\',
      \'uuid\' => \'ee3d1a7c-e008-4439-b211-cbb60a9198db\',
      \'revision_timestamp\' => \'1424963904\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Semester opening meeting. Agenda: program and industry presentation.\',
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => \'Semester opening meeting. Agenda: program and industry presentation.\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-02-23 18:00:00\',
            \'value2\' => \'2015-02-23 19:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424963904\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1290\',
        \'source\' => \'node/1278\',
        \'alias\' => \'semester-opening-meeting\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1233\',
      \'uid\' => \'1\',
      \'title\' => \'Vitaest \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d3a23fb1-3162-4ec7-a16b-da939bb9db47\',
      \'nid\' => \'1233\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424952680\',
      \'changed\' => \'1424961209\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f30cbb66-182f-4b06-8976-462af1d52a4f\',
      \'revision_timestamp\' => \'1424961209\',
      \'revision_uid\' => \'3\',
      \'body\' => array(),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-03-10 20:00:00\',
            \'value2\' => \'2015-03-10 22:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424952680\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1245\',
        \'source\' => \'node/1233\',
        \'alias\' => \'vitaest\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1241\',
      \'uid\' => \'1\',
      \'title\' => \' Vincze H. Orsolya: érveléstechnika I.\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3206b2bd-2075-4e3a-9b73-b096a0b69f7c\',
      \'nid\' => \'1241\',
      \'type\' => \'event_calendar\',
      \'language\' => \'hu\',
      \'created\' => \'1424953309\',
      \'changed\' => \'1424961945\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'faf1ce86-546a-4600-a40c-35ca574f556a\',
      \'revision_timestamp\' => \'1424961945\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Amiről szó lesz:\\r\\n- érvelések kontextualizácója, szerepek, környezetek hatása\\r\\n- racionális vita, a látszatvita és a veszekedés\\r\\n- a résztvevők céljainak azonosítása racionális vitában, illetve veszekedésben\\r\\n- statisztikai érvelések és az adatok általánosítása\\r\\n- gyakorlat: adatok ábrázolása\\r\\n- nyelvhasználati hibák és technikák: kétértelműség, homályosság, demagógia\\r\\n- kétértelműségek és csúsztatások azonosítása\\r\\n- kérdések és válaszolási stratégiák\\r\\n- gyakorlat: kérdések előfeltevéseinek azonosítása, válaszok alkotása agresszív és túl sokat állító kérdésekre",
            \'summary\' => \'\',
            \'format\' => NULL,
            \'safe_value\' => "Amiről szó lesz:\\r\\n- érvelések kontextualizácója, szerepek, környezetek hatása\\r\\n- racionális vita, a látszatvita és a veszekedés\\r\\n- a résztvevők céljainak azonosítása racionális vitában, illetve veszekedésben\\r\\n- statisztikai érvelések és az adatok általánosítása\\r\\n- gyakorlat: adatok ábrázolása\\r\\n- nyelvhasználati hibák és technikák: kétértelműség, homályosság, demagógia\\r\\n- kétértelműségek és csúsztatások azonosítása\\r\\n- kérdések és válaszolási stratégiák\\r\\n- gyakorlat: kérdések előfeltevéseinek azonosítása, válaszok alkotása agresszív és túl sokat állító kérdésekre",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'event_calendar_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-04-02 17:00:00\',
            \'value2\' => \'2015-04-02 20:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'event_calendar_status\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
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
      \'last_comment_timestamp\' => \'1424953309\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1253\',
        \'source\' => \'node/1241\',
        \'alias\' => \'vincze-h-orsolya-érveléstechnika-i\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
