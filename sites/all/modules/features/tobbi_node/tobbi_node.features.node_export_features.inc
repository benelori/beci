<?php
/**
 * @file
 * tobbi_node.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function tobbi_node_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1129\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4d04ee84-3f5b-45bf-a6eb-a3549e42741c\',
      \'nid\' => \'1129\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230557\',
      \'changed\' => \'1423230557\',
      \'tnid\' => \'658\',
      \'translate\' => \'0\',
      \'uuid\' => \'00bc8dd5-c997-43db-9697-1911a2dd6cef\',
      \'revision_timestamp\' => \'1423230557\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>CEO Viasat Hungaria Zrt, MTG Hungary</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>CEO Viasat Hungaria Zrt, MTG Hungary</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Esettanulmányos múltamnak nagyon sok mindent köszönhetek, egy kitörési- és referenciaponttá vált az életemben. GTK-nak küldetésesnek azon része, amely valami <u>másra </u>kíváncsi diákoknak valami <u>más gyakorlati tapasztalatot </u>kínál egy rendkívülien fontos és hasznos érték.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Esettanulmányos múltamnak nagyon sok mindent köszönhetek, egy kitörési- és referenciaponttá vált az életemben. GTK-nak küldetésesnek azon része, amely valami <u>másra </u>kíváncsi diákoknak valami <u>más gyakorlati tapasztalatot </u>kínál egy rendkívülien fontos és hasznos érték.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'539\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo_andris Cropped.jpg\',
            \'uri\' => \'public://szabo_andris Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25579\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421850566\',
            \'type\' => \'image\',
            \'uuid\' => \'33a0bea2-28ee-4142-a02b-18cab4a4fb50\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>TBBTE KGTK, egyetemi képzés, magyar tagozat,&nbsp;Bank és Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>TBBTE KGTK, egyetemi képzés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Szabó András\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2004\',
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
      \'last_comment_timestamp\' => \'1423230557\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1140\',
        \'source\' => \'node/1129\',
        \'alias\' => \'szabó-andrás-0\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'705\',
      \'uid\' => \'3\',
      \'title\' => \'Zala Ákos\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d611554a-642e-4ae5-9724-ea3a0aab1b42\',
      \'nid\' => \'705\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421678336\',
      \'changed\' => \'1421853729\',
      \'tnid\' => \'705\',
      \'translate\' => \'0\',
      \'uuid\' => \'03bea5dc-4729-4034-96a9-862aec3ebe6b\',
      \'revision_timestamp\' => \'1421853729\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>tanácsadó, Human Telex Consulting</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>tanácsadó, Human Telex Consulting</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'566\',
            \'uid\' => \'3\',
            \'filename\' => \'zala_akos Cropped.jpg\',
            \'uri\' => \'public://zala_akos Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'19087\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853729\',
            \'type\' => \'image\',
            \'uuid\' => \'fa441c43-392e-47ba-a92e-c268653e11b8\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Zala Ákos\',
            \'format\' => NULL,
            \'safe_value\' => \'Zala Ákos\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Zala Ákos\',
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
      \'last_comment_timestamp\' => \'1421678336\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'715\',
        \'source\' => \'node/705\',
        \'alias\' => \'zala-ákos\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1174\',
      \'uid\' => \'3\',
      \'title\' => \'2013-2014\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c4187de6-c89a-4fe4-996d-c9a4c6c766d8\',
      \'nid\' => \'1174\',
      \'type\' => \'result\',
      \'language\' => \'en\',
      \'created\' => \'1423232773\',
      \'changed\' => \'1424259656\',
      \'tnid\' => \'627\',
      \'translate\' => \'0\',
      \'uuid\' => \'05cc203f-0ab9-425f-922f-cb76bafa8c86\',
      \'revision_timestamp\' => \'1424259656\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">In the 2013/2014 academic year,&nbsp;members took part at 12&nbsp;case study competitions, and won 11 prices. At the ETDK scientific conference 13 members represented the GTK and all of them got a rank, and participated at&nbsp;the Leadership Program.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">In the 2013/2014 academic year, members took part at 12 case study competitions, and won 11 prices. At the ETDK scientific conference 13 members represented the GTK and all of them got a rank, and participated at the Leadership Program.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>Case Study Solver of the Year Competition - HBCS, Budapest:</strong>&nbsp;</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Zselyke Demeter - <strong>First Place and Best Presenter Award,&nbsp;</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni) - <strong>Second Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Entrepreneurship Competition Vilnius, Vilnius (Lithuania):&nbsp;</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Albert Gáspár, Csilla Ábrán, Anita Kovács and Hunor Német - <strong>Sixth Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>International Case Competition @ Maastricht, Maastricht (Netherlands):</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Csilla Ábrán, Gáspár Albert, Zsuzsa Kerekes and Hunor Német</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>BCG Strategy Cup 2014, Budapest:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni) - <strong>First Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Dr. Susánszky János Case Study Competition, Miskolc:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Renáta Czirják, Zselyke Demeter, Alpár Kiss and Rita Székely - <strong>First Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XIII. Tímár László Case Study Competition, Veszprém:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Zselyke Demeter, Zsuzsa Kerekes, Alpár Kiss and Anita Kovács - <strong>First Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Zselyke Demeter - <strong>Special Prize for Best Foreign Presenter</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XV. National Case Study Competition, Budapest:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni), Zsolt Benkő (alumni),&nbsp;Zselyke Demeter, Alpár Kiss</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>KICC- KPMG International Case Competition, Bucharest:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni), Csilla Ábrán, Renáta Czirják,&nbsp;Hunor Német - <strong>Second Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XII. National Finance Case Study Competition, Győr:&nbsp;</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Zselyke Demeter and Ádám Salamon (alumni) - <strong>First Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>IV. Business Planning Competition, Saint George:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Csaba Kristály (alumni) - <strong>Second Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>VI. “Dr. Papp László” Case Study Competition in Accounting, Pécs:&nbsp;</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni) - <strong>Second Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Finalists were:</strong> Zselyke Demeter, Tünde Dombi, Anita Kovács, Rita Székely&nbsp;</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Cluj-Napoca Case Study Competition 2014, Cluj-Napoca:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Zselyke Demeter, Renáta Czirják, Alpár Kiss, Rita Székely - <strong>First Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Csilla Ábrán, Gáspár Albert, Zsuzsa Kerekes, Hunor Német - <strong>Second Place</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>Case Study Solver of the Year Competition - HBCS, Budapest:</strong> </p>\\n<p class=\\"rtejustify\\">Zselyke Demeter - <strong>First Place and Best Presenter Award, </strong></p>\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni) - <strong>Second Place</strong></p>\\n<p class=\\"rtejustify\\"><strong>Entrepreneurship Competition Vilnius, Vilnius (Lithuania): </strong></p>\\n<p class=\\"rtejustify\\">Albert Gáspár, Csilla Ábrán, Anita Kovács and Hunor Német - <strong>Sixth Place</strong></p>\\n<p class=\\"rtejustify\\"><strong>International Case Competition @ Maastricht, Maastricht (Netherlands):</strong></p>\\n<p class=\\"rtejustify\\">Csilla Ábrán, Gáspár Albert, Zsuzsa Kerekes and Hunor Német</p>\\n<p class=\\"rtejustify\\"><strong>BCG Strategy Cup 2014, Budapest:</strong></p>\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni) - <strong>First Place</strong></p>\\n<p class=\\"rtejustify\\"><strong>Dr. Susánszky János Case Study Competition, Miskolc:</strong></p>\\n<p class=\\"rtejustify\\">Renáta Czirják, Zselyke Demeter, Alpár Kiss and Rita Székely - <strong>First Place</strong></p>\\n<p class=\\"rtejustify\\"><strong>XIII. Tímár László Case Study Competition, Veszprém:</strong></p>\\n<p class=\\"rtejustify\\">Zselyke Demeter, Zsuzsa Kerekes, Alpár Kiss and Anita Kovács - <strong>First Place</strong></p>\\n<p class=\\"rtejustify\\">Zselyke Demeter - <strong>Special Prize for Best Foreign Presenter</strong></p>\\n<p class=\\"rtejustify\\"><strong>XV. National Case Study Competition, Budapest:</strong></p>\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni), Zsolt Benkő (alumni), Zselyke Demeter, Alpár Kiss</p>\\n<p class=\\"rtejustify\\"><strong>KICC- KPMG International Case Competition, Bucharest:</strong></p>\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni), Csilla Ábrán, Renáta Czirják, Hunor Német - <strong>Second Place</strong></p>\\n<p class=\\"rtejustify\\"><strong>XII. National Finance Case Study Competition, Győr: </strong></p>\\n<p class=\\"rtejustify\\">Zselyke Demeter and Ádám Salamon (alumni) - <strong>First Place</strong></p>\\n<p class=\\"rtejustify\\"><strong>IV. Business Planning Competition, Saint George:</strong></p>\\n<p class=\\"rtejustify\\">Csaba Kristály (alumni) - <strong>Second Place</strong></p>\\n<p class=\\"rtejustify\\"><strong>VI. “Dr. Papp László” Case Study Competition in Accounting, Pécs: </strong></p>\\n<p class=\\"rtejustify\\">Krisztina Ábrahám (alumni) - <strong>Second Place</strong></p>\\n<p class=\\"rtejustify\\"><strong>Finalists were:</strong> Zselyke Demeter, Tünde Dombi, Anita Kovács, Rita Székely </p>\\n<p class=\\"rtejustify\\"><strong>Cluj-Napoca Case Study Competition 2014, Cluj-Napoca:</strong></p>\\n<p class=\\"rtejustify\\">Zselyke Demeter, Renáta Czirják, Alpár Kiss, Rita Székely - <strong>First Place</strong></p>\\n<p class=\\"rtejustify\\">Csilla Ábrán, Gáspár Albert, Zsuzsa Kerekes, Hunor Német - <strong>Second Place</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>Management section - First Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Albert&nbsp;Gáspár:&nbsp;<em>The impact of services on the manufacturer\'s business model and financial&nbsp;performance - a case study of a Romanian pharmaceutical company</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Demeter Zselyke:&nbsp;<em>Competing business models: traditional vs. short supply chains in the food&nbsp;industry</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Management section - Second Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Kiss Alpár, Székely Rita, Czirják Renáta: <em>The role of 3PL partners in the food supply chain in Romania</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Német Hunor Attila, Guttmann Csongor István, Kovács Anita:&nbsp;<em>What next Farmec? - Growth strategy development in the North West Europe region</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Management section -&nbsp;Third Place</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Dombi Tünde:<strong>&nbsp;</strong><em>The expansion strategy of Optiko Ltd. in the optical industry</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Fehér Attila, Fekete Réka, Demeter Zselyke:<em>&nbsp;The food industry company’s market strategy - a case study of&nbsp;the Hochland company</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Banking and Finance section -&nbsp;Diploma of Mention</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábárn Csilla-Hajnalka:&nbsp;<em>The analysis of the MarsoRom ture distribution company\'s commercial loan portfolio</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>Management section - First Place</strong></p>\\n<p class=\\"rtejustify\\">Albert Gáspár: <em>The impact of services on the manufacturer\'s business model and financial performance - a case study of a Romanian pharmaceutical company</em></p>\\n<p class=\\"rtejustify\\">Demeter Zselyke: <em>Competing business models: traditional vs. short supply chains in the food industry</em></p>\\n<p class=\\"rtejustify\\"><strong>Management section - Second Place</strong></p>\\n<p class=\\"rtejustify\\">Kiss Alpár, Székely Rita, Czirják Renáta: <em>The role of 3PL partners in the food supply chain in Romania</em></p>\\n<p class=\\"rtejustify\\">Német Hunor Attila, Guttmann Csongor István, Kovács Anita: <em>What next Farmec? - Growth strategy development in the North West Europe region</em></p>\\n<p class=\\"rtejustify\\"><strong>Management section - Third Place</strong></p>\\n<p class=\\"rtejustify\\">Dombi Tünde:<strong> </strong><em>The expansion strategy of Optiko Ltd. in the optical industry</em></p>\\n<p class=\\"rtejustify\\">Fehér Attila, Fekete Réka, Demeter Zselyke:<em> The food industry company’s market strategy - a case study of the Hochland company</em></p>\\n<p class=\\"rtejustify\\"><strong>Banking and Finance section - Diploma of Mention</strong></p>\\n<p class=\\"rtejustify\\">Ábárn Csilla-Hajnalka: <em>The analysis of the MarsoRom ture distribution company\'s commercial loan portfolio</em></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Aims:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>transfer of a ractice-oriented business knowledge</li>\\r\\n\\t<li>business logic learning</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>5 trainings</strong><strong>:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Entrepreneurial behavior,&nbsp;enterprise, business idea, market&nbsp;analysis</li>\\r\\n\\t<li>Operations planning, human&nbsp;resource management</li>\\r\\n\\t<li>Marketing</li>\\r\\n\\t<li>Finance</li>\\r\\n\\t<li>Presentation techniques</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Participants:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>30 students</li>\\r\\n\\t<li>8 teams</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Coordinators:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Ábrahám Krisztina</li>\\r\\n\\t<li>Rácz Béla Gergely</li>\\r\\n\\t<li>Vincze Tamás</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Aims:</strong></p>\\n<ul><li>transfer of a ractice-oriented business knowledge</li>\\n<li>business logic learning</li>\\n</ul><p><strong>5 trainings</strong><strong>:</strong></p>\\n<ul><li>Entrepreneurial behavior, enterprise, business idea, market analysis</li>\\n<li>Operations planning, human resource management</li>\\n<li>Marketing</li>\\n<li>Finance</li>\\n<li>Presentation techniques</li>\\n</ul><p><strong>Participants:</strong></p>\\n<ul><li>30 students</li>\\n<li>8 teams</li>\\n</ul><p><strong>Coordinators:</strong></p>\\n<ul><li>Ábrahám Krisztina</li>\\n<li>Rácz Béla Gergely</li>\\n<li>Vincze Tamás</li>\\n</ul>",
          ),
        ),
      ),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>Péter Küllői</strong>, founding member of the Mosoly (Smile) Foundation,&nbsp;and chairman of the board at the Bátor Tábor Foundation<br />\\r\\n<strong>dr. Károly Jókai</strong>, lecturer of the Central European University,&nbsp;Executive Director of the Hungarian-American Fulbright Commission<br />\\r\\n<strong>dr. Helen Roberts</strong>, Professorial Research Fellow&nbsp;of the University College London<br />\\r\\n<strong>dr. Rodney Baker</strong>, Emeritus Professor of Government,&nbsp;London School of Economics<br />\\r\\n<strong>dr. Konrad F. Kaschek</strong>, plant manager of Bosch Automotive Electronics&nbsp;emerging markets greenfield site in Cluj-Napoca<br />\\r\\n<strong>dr. Răzvan Mustaţă</strong>, the vice-dean of Babeş-Bolyai University,&nbsp;Faculty of Economics and Business Administration<br />\\r\\n<strong>András Tombor</strong>, the founder and president of Mathias Corvinus Collegium<br />\\r\\n<strong>dr. Malcolm Gillies</strong>, Rector of the London Metropolitan University<br />\\r\\n<strong>dr. László Radácsi</strong>, scientific collaborator of the Budapest Business School,&nbsp;and the founder and current leader of SmartLab Consulting Ltd. from Budapest<br />\\r\\n<strong>Miklós Kerezsi</strong>, managing director, owner, East Consulting<br />\\r\\n<strong>Bálint Molnár</strong>, marketing and communications manager&nbsp;at EIT ICT Labs Budapest<br />\\r\\n<strong>dr. Mercé Mach</strong>, professor of the University of Barcelona,&nbsp;Faculty of Economics and Business<br />\\r\\n<strong>dr. Anna Keszeg</strong>, assistant professor of the Babeş- Bolyai University,&nbsp;Faculty of Political Sciences, Administration and Communication<br />\\r\\n<strong>Zsolt Ábrahám and Janka Hoffmann</strong>, members of the&nbsp;Hungarian Business Case Society<br />\\r\\n<strong>dr. Magor Kádár</strong>, assistant professor of the Babeş-Bolyai University,&nbsp;Faculty of Political Sciences, Administration and Communication<br />\\r\\n<strong>dr. David Sims</strong>, professor at the City University London - Cass Business School<br />\\r\\n<strong>József Takács</strong>, Head of Strategy and Business Development, Vodafone Hungary<br />\\r\\n<strong>András Viszkievicz</strong>, Actuarial Analyst, Aegon Insurance Company, Hungary<br />\\r\\n<strong>dr. David Venter</strong>, former advisor to Nelson Mandela, currently professor&nbsp;of the Vlerick Management School, Belgium<br />\\r\\n<strong>dr. Daniel Ding</strong>, professor of Ferris State University, Michigan</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>Péter Küllői</strong>, founding member of the Mosoly (Smile) Foundation, and chairman of the board at the Bátor Tábor Foundation<br /><strong>dr. Károly Jókai</strong>, lecturer of the Central European University, Executive Director of the Hungarian-American Fulbright Commission<br /><strong>dr. Helen Roberts</strong>, Professorial Research Fellow of the University College London<br /><strong>dr. Rodney Baker</strong>, Emeritus Professor of Government, London School of Economics<br /><strong>dr. Konrad F. Kaschek</strong>, plant manager of Bosch Automotive Electronics emerging markets greenfield site in Cluj-Napoca<br /><strong>dr. Răzvan Mustaţă</strong>, the vice-dean of Babeş-Bolyai University, Faculty of Economics and Business Administration<br /><strong>András Tombor</strong>, the founder and president of Mathias Corvinus Collegium<br /><strong>dr. Malcolm Gillies</strong>, Rector of the London Metropolitan University<br /><strong>dr. László Radácsi</strong>, scientific collaborator of the Budapest Business School, and the founder and current leader of SmartLab Consulting Ltd. from Budapest<br /><strong>Miklós Kerezsi</strong>, managing director, owner, East Consulting<br /><strong>Bálint Molnár</strong>, marketing and communications manager at EIT ICT Labs Budapest<br /><strong>dr. Mercé Mach</strong>, professor of the University of Barcelona, Faculty of Economics and Business<br /><strong>dr. Anna Keszeg</strong>, assistant professor of the Babeş- Bolyai University, Faculty of Political Sciences, Administration and Communication<br /><strong>Zsolt Ábrahám and Janka Hoffmann</strong>, members of the Hungarian Business Case Society<br /><strong>dr. Magor Kádár</strong>, assistant professor of the Babeş-Bolyai University, Faculty of Political Sciences, Administration and Communication<br /><strong>dr. David Sims</strong>, professor at the City University London - Cass Business School<br /><strong>József Takács</strong>, Head of Strategy and Business Development, Vodafone Hungary<br /><strong>András Viszkievicz</strong>, Actuarial Analyst, Aegon Insurance Company, Hungary<br /><strong>dr. David Venter</strong>, former advisor to Nelson Mandela, currently professor of the Vlerick Management School, Belgium<br /><strong>dr. Daniel Ding</strong>, professor of Ferris State University, Michigan</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>7th International Management Conference </strong><strong>\\"Managerial Challenges of the Contemporary Society\\" Albert Gáspár - Szász Levente (2014)</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">\\"<em>The impact of servitization on the manufacturer\'s business model and financial performance - a case study of a Romanian pharmaceutical company</em>\\"</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>7th International Management Conference </strong><strong>\\"Managerial Challenges of the Contemporary Society\\" Albert Gáspár - Szász Levente (2014)</strong></p>\\n<p class=\\"rtejustify\\">\\"<em>The impact of servitization on the manufacturer\'s business model and financial performance - a case study of a Romanian pharmaceutical company</em>\\"</p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Czirják Renáta és Székely Rita @ Tipo Holding</p>\\r\\n\\r\\n<p>Kovács Anita és Dombi Tünde @ East Consulting</p>\\r\\n\\r\\n<p>Német Hunor és Kiss Alpár @ Concorde Alapkezelő</p>\\r\\n\\r\\n<p>Fekete Réka és Fehér Attila @ East Grain</p>\\r\\n\\r\\n<p>Albert Gáspár, Guttmann Csongor és Kerekes Zsuzsa @ Romespa</p>\\r\\n\\r\\n<p>Ábrán Csilla @ MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Czirják Renáta és Székely Rita @ Tipo Holding</p>\\n<p>Kovács Anita és Dombi Tünde @ East Consulting</p>\\n<p>Német Hunor és Kiss Alpár @ Concorde Alapkezelő</p>\\n<p>Fekete Réka és Fehér Attila @ East Grain</p>\\n<p>Albert Gáspár, Guttmann Csongor és Kerekes Zsuzsa @ Romespa</p>\\n<p>Ábrán Csilla @ MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1423232773\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1185\',
        \'source\' => \'node/1174\',
        \'alias\' => \'2013-2014\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'982\',
      \'uid\' => \'3\',
      \'title\' => \'Radics László\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'132d58a3-5e4a-459d-8ee6-2ebd33432ff7\',
      \'nid\' => \'982\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226521\',
      \'changed\' => \'1423226521\',
      \'tnid\' => \'698\',
      \'translate\' => \'0\',
      \'uuid\' => \'07b8a273-bd6a-4a42-95b5-9ae7ba705c25\',
      \'revision_timestamp\' => \'1423226521\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>colaborator ştiinţific al Budapest Business School, fondator şi lider actual al companiei Smartlab Consulting Ltd. din Budapesta</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>colaborator ştiinţific al Budapest Business School, fondator şi lider actual al companiei Smartlab Consulting Ltd. din Budapesta</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'558\',
            \'uid\' => \'3\',
            \'filename\' => \'radacsi_laszlo Cropped Cropped.jpg\',
            \'uri\' => \'public://radacsi_laszlo Cropped Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'26759\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852849\',
            \'type\' => \'image\',
            \'uuid\' => \'3331cf9b-fd47-4b17-bb5f-6c960d85d9d4\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Radics László\',
            \'format\' => NULL,
            \'safe_value\' => \'Radics László\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Radics László\',
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
      \'last_comment_timestamp\' => \'1423226521\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'993\',
        \'source\' => \'node/982\',
        \'alias\' => \'radics-lászló\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'912\',
      \'uid\' => \'3\',
      \'title\' => \'Rácz Béla Gergely\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cf14058a-47c6-4699-a606-81c1625f54c5\',
      \'nid\' => \'912\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421856117\',
      \'changed\' => \'1421856117\',
      \'tnid\' => \'912\',
      \'translate\' => \'0\',
      \'uuid\' => \'08857ac5-fe68-48ba-ac92-c65fe41f555a\',
      \'revision_timestamp\' => \'1421856117\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Koordinátor\',
            \'format\' => NULL,
            \'safe_value\' => \'Koordinátor\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\r\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'591\',
            \'uid\' => \'3\',
            \'filename\' => \'RaczBela.jpg\',
            \'uri\' => \'public://RaczBela_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34537\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421856117\',
            \'type\' => \'image\',
            \'uuid\' => \'028c5f63-b4cd-409a-a2c6-efec36b7930d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés,&nbsp;Vállalati pénzügyi menedzsment&nbsp;szakirány<br />\\r\\n2007-2010: BBTE KGTK, egyetemi&nbsp;kézpés, magyar tagozat, Bank és&nbsp;Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés, Vállalati pénzügyi menedzsment szakirány<br />\\n2007-2010: BBTE KGTK, egyetemi kézpés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Rácz Béla Gergely\',
            \'format\' => NULL,
            \'safe_value\' => \'Rácz Béla Gergely\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Rácz Béla Gergely\',
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
      \'last_comment_timestamp\' => \'1421856117\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'923\',
        \'source\' => \'node/912\',
        \'alias\' => \'rácz-béla-gergely\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1119\',
      \'uid\' => \'3\',
      \'title\' => \'Salamon Ádám\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'516a5558-2e5c-4ed7-87a2-b080575eec28\',
      \'nid\' => \'1119\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230460\',
      \'changed\' => \'1423230460\',
      \'tnid\' => \'657\',
      \'translate\' => \'0\',
      \'uuid\' => \'08c4e8af-6a40-4c04-bd3d-58422c185f74\',
      \'revision_timestamp\' => \'1423230460\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Misys Digital Channels, Budapest</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Misys Digital Channels, Budapest</p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Ádám másodéves egyetemi hallgatóként jelentkezett a GTK-ba, amely utólag egyik legjobb döntésének bizonyult. Az elmúlt év történéséit áttekintve Ádám úgy gondolja, hogy nagyon sok versenyen elért pozitív eredményei, munkahelyi kitartása és sikerei, illetve a munkához való pozitív és lelkes hozzáállása nagymértékben a GTK-ban szerzett tapasztalatoknak és az itt gyűjtött tudásnak köszönhető.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Karrierjét egy banki platformokat szolgáltató informatikai cégnél, az IND Groupnál kezdte Junior Projektmenedzserként, majd egy felvásárlás következtében a Misys Digital Channels divíziójában folytatta Projektmendzserként.&nbsp;Jelenleg leginkább a vállalat romániai ügyfeleire koncentrál, több bank esetében fő kapcsolattartó és képviseli a vállalatot, Account Managerként; emellett aktuális ill. új projektek implementációját menedzseli.&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Ádám másodéves egyetemi hallgatóként jelentkezett a GTK-ba, amely utólag egyik legjobb döntésének bizonyult. Az elmúlt év történéséit áttekintve Ádám úgy gondolja, hogy nagyon sok versenyen elért pozitív eredményei, munkahelyi kitartása és sikerei, illetve a munkához való pozitív és lelkes hozzáállása nagymértékben a GTK-ban szerzett tapasztalatoknak és az itt gyűjtött tudásnak köszönhető.</p>\\n<p class=\\"rtejustify\\">Karrierjét egy banki platformokat szolgáltató informatikai cégnél, az IND Groupnál kezdte Junior Projektmenedzserként, majd egy felvásárlás következtében a Misys Digital Channels divíziójában folytatta Projektmendzserként. Jelenleg leginkább a vállalat romániai ügyfeleire koncentrál, több bank esetében fő kapcsolattartó és képviseli a vállalatot, Account Managerként; emellett aktuális ill. új projektek implementációját menedzseli. </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'601\',
            \'uid\' => \'3\',
            \'filename\' => \'salamon_adam.jpg\',
            \'uri\' => \'public://salamon_adam.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32631\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421929844\',
            \'type\' => \'image\',
            \'uuid\' => \'ef9fcf4a-18be-43f7-830e-eb940ccfaf44\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2013 – 2015: BBTE KGTK, mesteri képzés, Vállalati Pénzügyi Menedzsment szakirány</p>\\r\\n\\r\\n<p>2010 – 2013: BBTE KGTK, alapképzés, Pénzügy és Bank szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2013 – 2015: BBTE KGTK, mesteri képzés, Vállalati Pénzügyi Menedzsment szakirány</p>\\n<p>2010 – 2013: BBTE KGTK, alapképzés, Pénzügy és Bank szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Salamon Ádám\',
            \'format\' => NULL,
            \'safe_value\' => \'Salamon Ádám\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
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
      \'last_comment_timestamp\' => \'1423230460\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1130\',
        \'source\' => \'node/1119\',
        \'alias\' => \'salamon-ádám\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1051\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Loránd\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f0cdb462-d1bb-4f19-af15-079bff2d88f6\',
      \'nid\' => \'1051\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423229714\',
      \'changed\' => \'1423229714\',
      \'tnid\' => \'901\',
      \'translate\' => \'0\',
      \'uuid\' => \'0d8a6747-0609-4873-8b64-ed86201f4669\',
      \'revision_timestamp\' => \'1423229714\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'523\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy Loránd Cropped.jpg\',
            \'uri\' => \'public://Nagy Loránd Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20783\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848080\',
            \'type\' => \'image\',
            \'uuid\' => \'4c5ffdb7-4716-4f48-aef2-87e05e1acf07\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Nagy Loránd\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Loránd\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1423229714\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1062\',
        \'source\' => \'node/1051\',
        \'alias\' => \'nagy-loránd\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1130\',
      \'uid\' => \'3\',
      \'title\' => \'Szakács Szilárd\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b6306009-0748-4902-821f-10734054b710\',
      \'nid\' => \'1130\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230569\',
      \'changed\' => \'1423230569\',
      \'tnid\' => \'663\',
      \'translate\' => \'0\',
      \'uuid\' => \'0e6cfe7f-b589-46fb-b608-f22dfd027714\',
      \'revision_timestamp\' => \'1423230569\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MIG Bank Ltd, Lausanne, Svájc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MIG Bank Ltd, Lausanne, Svájc</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Szilárd egy tanéven keresztül (2009-2010) volt tagja a Gazdasági Tanácsadó Klubnak és úgy véli, hogy az egyetemi évek alatt egyik legjobb döntése volt a GTK-ba való belépése. Véleménye szerint a GTK alapos felkészítést biztosít, amely során olyan tudással gazdagodnak tagjai, mely nélkülözhetetlen a sikeres karrierépítéshez.<br />\\r\\nAz egyetemi évek alatt Szilárd nagy rajongója volt az egyetemen kívüli tevékenységeknek, versenyeknek. Részt vett közel 10 esettanulmány versenyen és 5 esetben díjazták. Több szakmai publikációja is megjelent, valamint egy ETDK-s 1. díjjal, valamint egy OTDK-s 3. díjjal is büszkélkedhet.<br />\\r\\nSzilárd 2008-tól aktív a munkaerőpiacon, 3 évig a Kárpátia Magyar-Román Kereskedelmi és Iparkamaránál, majd a marosvásárhelyi MarsoRom Kft-nél tevékenykedett. 2011 októberétől a svájci MIG Banknál a Közép-Kelet Európai régióra kiterjedő értékesítői, elemzői és piackutatási feladatokat látja el.<br />\\r\\nSzilárd nagy CFR rajongó, szereti a sportot és a társaságot.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Szilárd egy tanéven keresztül (2009-2010) volt tagja a Gazdasági Tanácsadó Klubnak és úgy véli, hogy az egyetemi évek alatt egyik legjobb döntése volt a GTK-ba való belépése. Véleménye szerint a GTK alapos felkészítést biztosít, amely során olyan tudással gazdagodnak tagjai, mely nélkülözhetetlen a sikeres karrierépítéshez.<br />\\nAz egyetemi évek alatt Szilárd nagy rajongója volt az egyetemen kívüli tevékenységeknek, versenyeknek. Részt vett közel 10 esettanulmány versenyen és 5 esetben díjazták. Több szakmai publikációja is megjelent, valamint egy ETDK-s 1. díjjal, valamint egy OTDK-s 3. díjjal is büszkélkedhet.<br />\\nSzilárd 2008-tól aktív a munkaerőpiacon, 3 évig a Kárpátia Magyar-Román Kereskedelmi és Iparkamaránál, majd a marosvásárhelyi MarsoRom Kft-nél tevékenykedett. 2011 októberétől a svájci MIG Banknál a Közép-Kelet Európai régióra kiterjedő értékesítői, elemzői és piackutatási feladatokat látja el.<br />\\nSzilárd nagy CFR rajongó, szereti a sportot és a társaságot.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'260\',
            \'uid\' => \'3\',
            \'filename\' => \'szsz.jpg\',
            \'uri\' => \'public://szsz.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'70828\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676382\',
            \'type\' => \'image\',
            \'uuid\' => \'724f6db4-e391-4a2f-a5e3-c5b5978d9b27\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'188\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'188\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2005-2008: BBTE KGTK, egyetemi képzés, Bank és Pénzügy.<br />\\r\\n2008-2010: BBTE KGTK, mesteri képzés, Projektmenedzsment és –értékelés.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2005-2008: BBTE KGTK, egyetemi képzés, Bank és Pénzügy.<br />\\n2008-2010: BBTE KGTK, mesteri képzés, Projektmenedzsment és –értékelés.</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Szakács Szilárd\',
            \'format\' => NULL,
            \'safe_value\' => \'Szakács Szilárd\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
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
      \'last_comment_timestamp\' => \'1423230569\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1141\',
        \'source\' => \'node/1130\',
        \'alias\' => \'szakács-szilárd\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'996\',
      \'uid\' => \'3\',
      \'title\' => \'Viszkievicz András \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'91cddfbc-e964-4a7f-8975-71c1d2f62709\',
      \'nid\' => \'996\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423227254\',
      \'changed\' => \'1423227254\',
      \'tnid\' => \'704\',
      \'translate\' => \'0\',
      \'uuid\' => \'0f96e73f-272a-423d-8997-6cc693bc29a5\',
      \'revision_timestamp\' => \'1423227254\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Actuarial Analist, Aegon Insurance Company, Hungary</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Actuarial Analist, Aegon Insurance Company, Hungary</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1005\',
            \'uid\' => \'3\',
            \'filename\' => \'viszkievicz Cropped.jpg\',
            \'uri\' => \'public://viszkievicz Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22572\',
            \'status\' => \'1\',
            \'timestamp\' => \'1423227234\',
            \'type\' => \'image\',
            \'uuid\' => \'0504f29c-11d3-4187-ac88-0741b20278e7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Viszkievicz András \',
            \'format\' => NULL,
            \'safe_value\' => \'Viszkievicz András \',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Viszkievicz András \',
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
      \'last_comment_timestamp\' => \'1423227254\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1007\',
        \'source\' => \'node/996\',
        \'alias\' => \'viszkievicz-andrás\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'720\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Zsuzsanna\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5cb6c3c3-d5cb-4b43-abc3-ee62e6447c90\',
      \'nid\' => \'720\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421680475\',
      \'changed\' => \'1421855475\',
      \'tnid\' => \'720\',
      \'translate\' => \'0\',
      \'uuid\' => \'11fa2f34-fab0-4797-a918-4be4cc6b5860\',
      \'revision_timestamp\' => \'1421855475\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Középiskolás Program Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Középiskolás Program Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'582\',
            \'uid\' => \'3\',
            \'filename\' => \'NagyZs Cropped.jpg\',
            \'uri\' => \'public://NagyZs Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'29097\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855475\',
            \'type\' => \'image\',
            \'uuid\' => \'f7a59946-adff-4e9b-81c5-4045c939ee55\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy Zsuzsanna\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Zsuzsanna\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Zsuzsanna\',
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
      \'last_comment_timestamp\' => \'1421680475\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'730\',
        \'source\' => \'node/720\',
        \'alias\' => \'nagy-zsuzsanna\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1057\',
      \'uid\' => \'3\',
      \'title\' => \'Pásztor Timea\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0b01456c-6909-416d-87ca-8d823acd985a\',
      \'nid\' => \'1057\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423229784\',
      \'changed\' => \'1423229784\',
      \'tnid\' => \'905\',
      \'translate\' => \'0\',
      \'uuid\' => \'1276c97c-14a5-49b9-90ac-503bdc0dcf2b\',
      \'revision_timestamp\' => \'1423229784\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'524\',
            \'uid\' => \'3\',
            \'filename\' => \'Pasztor Timi.jpg\',
            \'uri\' => \'public://Pasztor Timi.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'33186\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848084\',
            \'type\' => \'image\',
            \'uuid\' => \'681d5c6f-2909-418f-8890-1e6ee177e5a7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Pásztor Timea\',
            \'format\' => NULL,
            \'safe_value\' => \'Pásztor Timea\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1423229784\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1068\',
        \'source\' => \'node/1057\',
        \'alias\' => \'pásztor-timea\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1156\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Zsuzsanna\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'16bcba89-ec75-4302-a632-512b013c2467\',
      \'nid\' => \'1156\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230968\',
      \'changed\' => \'1423230968\',
      \'tnid\' => \'720\',
      \'translate\' => \'0\',
      \'uuid\' => \'17804fd2-397c-4e7d-9900-4fe2efaaee67\',
      \'revision_timestamp\' => \'1423230968\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni - Program pentru Liceeni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni - Program pentru Liceeni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'582\',
            \'uid\' => \'3\',
            \'filename\' => \'NagyZs Cropped.jpg\',
            \'uri\' => \'public://NagyZs Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'29097\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855475\',
            \'type\' => \'image\',
            \'uuid\' => \'f7a59946-adff-4e9b-81c5-4045c939ee55\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Nagy Zsuzsanna\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Zsuzsanna\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Zsuzsanna\',
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
      \'last_comment_timestamp\' => \'1423230968\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1167\',
        \'source\' => \'node/1156\',
        \'alias\' => \'nagy-zsuzsanna\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'990\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Ádám\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'845c42da-7e52-4dd4-979c-8d9a4e497119\',
      \'nid\' => \'990\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226815\',
      \'changed\' => \'1423226815\',
      \'tnid\' => \'702\',
      \'translate\' => \'0\',
      \'uuid\' => \'17c8a7a0-82bb-406c-a138-3b4d48a8ef57\',
      \'revision_timestamp\' => \'1423226815\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>director general, InfoGroup</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>director general, InfoGroup</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'565\',
            \'uid\' => \'3\',
            \'filename\' => \'szekely_adam Cropped.jpg\',
            \'uri\' => \'public://szekely_adam Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22414\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853651\',
            \'type\' => \'image\',
            \'uuid\' => \'cd9cb5a0-93f5-4a1e-bca3-28816c786b88\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Székely Ádám\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Ádám\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Székely Ádám\',
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
      \'last_comment_timestamp\' => \'1423226815\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1001\',
        \'source\' => \'node/990\',
        \'alias\' => \'székely-ádám\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'905\',
      \'uid\' => \'3\',
      \'title\' => \'Pásztor Timea\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'88937b47-ac2c-4777-84b0-c60dd991e24c\',
      \'nid\' => \'905\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421829304\',
      \'changed\' => \'1421848084\',
      \'tnid\' => \'905\',
      \'translate\' => \'0\',
      \'uuid\' => \'181d4bc2-62db-499e-ae42-354af34d6edf\',
      \'revision_timestamp\' => \'1421848084\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'524\',
            \'uid\' => \'3\',
            \'filename\' => \'Pasztor Timi.jpg\',
            \'uri\' => \'public://Pasztor Timi.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'33186\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848084\',
            \'type\' => \'image\',
            \'uuid\' => \'681d5c6f-2909-418f-8890-1e6ee177e5a7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Pásztor Timea\',
            \'format\' => NULL,
            \'safe_value\' => \'Pásztor Timea\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1421829304\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'916\',
        \'source\' => \'node/905\',
        \'alias\' => \'pásztor-timea\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'661\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Krisztián\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ea4c9e77-124b-4d5c-9561-c4ef401602de\',
      \'nid\' => \'661\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421676220\',
      \'changed\' => \'1421676220\',
      \'tnid\' => \'661\',
      \'translate\' => \'0\',
      \'uuid\' => \'191391f7-4673-40bb-a03b-89b5a48213b7\',
      \'revision_timestamp\' => \'1421676220\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Chimszed Invest SRL</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Chimszed Invest SRL</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'258\',
            \'uid\' => \'3\',
            \'filename\' => \'szkr.jpg\',
            \'uri\' => \'public://szkr.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'44259\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676220\',
            \'type\' => \'image\',
            \'uuid\' => \'cbc5aea2-0264-40b5-8cbd-348bbb424beb\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'167\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'167\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vállalkozásmenedzsment - MSc<br />\\r\\nMenedzsment - BSc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Vállalkozásmenedzsment - MSc<br />\\nMenedzsment - BSc</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Székely Krisztián\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Krisztián\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
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
      \'last_comment_timestamp\' => \'1421676220\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'671\',
        \'source\' => \'node/661\',
        \'alias\' => \'székely-krisztián\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'702\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Ádám\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ffe36755-c008-45eb-889c-d718b838c935\',
      \'nid\' => \'702\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421678240\',
      \'changed\' => \'1421853651\',
      \'tnid\' => \'702\',
      \'translate\' => \'0\',
      \'uuid\' => \'1a29a3f4-fd4a-44f6-901b-706482ad4594\',
      \'revision_timestamp\' => \'1421853651\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>ügyvezető igazgató, InfoGroup</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>ügyvezető igazgató, InfoGroup</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'565\',
            \'uid\' => \'3\',
            \'filename\' => \'szekely_adam Cropped.jpg\',
            \'uri\' => \'public://szekely_adam Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22414\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853651\',
            \'type\' => \'image\',
            \'uuid\' => \'cd9cb5a0-93f5-4a1e-bca3-28816c786b88\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Székely Ádám\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Ádám\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Székely Ádám\',
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
      \'last_comment_timestamp\' => \'1421678240\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'712\',
        \'source\' => \'node/702\',
        \'alias\' => \'székely-ádám\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'901\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Loránd\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ec6791a0-b233-450b-a5df-a5c6b2c1e277\',
      \'nid\' => \'901\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421829089\',
      \'changed\' => \'1421848080\',
      \'tnid\' => \'901\',
      \'translate\' => \'0\',
      \'uuid\' => \'1baaade1-fa6e-4d1e-bebe-aaf110dc22ac\',
      \'revision_timestamp\' => \'1421848080\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'523\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy Loránd Cropped.jpg\',
            \'uri\' => \'public://Nagy Loránd Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20783\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848080\',
            \'type\' => \'image\',
            \'uuid\' => \'4c5ffdb7-4716-4f48-aef2-87e05e1acf07\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy Loránd\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Loránd\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1421829089\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'912\',
        \'source\' => \'node/901\',
        \'alias\' => \'nagy-loránd\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'727\',
      \'uid\' => \'1\',
      \'title\' => \'2011-2012 tevékenységi beszámoló\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'39c28157-6435-41e2-aa40-066db539a0b7\',
      \'nid\' => \'727\',
      \'type\' => \'result\',
      \'language\' => \'hu\',
      \'created\' => \'1421689549\',
      \'changed\' => \'1424261165\',
      \'tnid\' => \'727\',
      \'translate\' => \'0\',
      \'uuid\' => \'1c2c1845-ae0d-4c38-8af1-199782f6cdcc\',
      \'revision_timestamp\' => \'1424261165\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">2011-2012-es tanévben a GTK tagoknak lehetősége volt részt venni hazai és külföldi előadók képzésein. A meghívott előadók mindig hasznos információkkal gazdagították a GTK-sok tudását, látókörét, akár konkrét projektben való segítségnyújtással vagy gyakorlati képzésekkel.&nbsp;Ezek mellett, pedig idén is részt vettek esettversenyeken, szám szerint 10-en és 8 díjat hoztak Kolozsvárra.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">2011-2012-es tanévben a GTK tagoknak lehetősége volt részt venni hazai és külföldi előadók képzésein. A meghívott előadók mindig hasznos információkkal gazdagították a GTK-sok tudását, látókörét, akár konkrét projektben való segítségnyújtással vagy gyakorlati képzésekkel. Ezek mellett, pedig idén is részt vettek esettversenyeken, szám szerint 10-en és 8 díjat hoztak Kolozsvárra.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>XI. Csíkszeredai Nyílt Esettanulmány Verseny, Csíkszereda:</strong><br />\\r\\nÁbrahám Krisztina – <strong>I. hely</strong><br />\\r\\n<strong>Részt vettek:</strong> Benkő Zsolt, Dorner Boglárka, Erdélyi Attila, Kristály Csaba, Major Tamás, Szőcs Kinga Beáta</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>IV. dr. Susánszky János Nemzetközi Esettanulmányi Verseny, Miskolc:</strong><br />\\r\\nÁbrahám Krisztina, Benkő Zsolt, Major Tamás, Szőcs Kinga Beáta - <strong>leggyakorlatiasabb megoldás különdíj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>I.Pénzügyi és Számviteli Esettanulmányi Verseny, Budapest</strong>:</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Baumgartner Mónika, Erdély Attila, Rácz Béla (alumni) - <strong>I. hely</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Kolozsvári Egyetemista Esettanulmány Versenyen 2012, Kolozsvár:</strong><br />\\r\\nÁbrahám Krisztina, Ferencz Hunor – <strong>I. hely</strong><br />\\r\\nBenkő Zsolt, Dorner Boglárka–Tamara, Farkas Csongor, Szőcs Kinga–Beáta – <strong>II. hely</strong><br />\\r\\nDemeter Zselyke, Furdek Balázs, Rákóczi Roland, Salamon Ádám – <strong>dicséret</strong><br />\\r\\n<strong>Részvétel:</strong> Kristály Csaba</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>BCG Strategy Cup 2012, Budapest:</strong><br />\\r\\nSzőcs Kinga Beáta - <strong>II. hely</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XIII. Országos Esettanulmány Verseny (OEV), Budapest:</strong><br />\\r\\nDorner Boglárka Tamara, Erdély Attila, Farkas Csongor, Szőcs Kinga-Beáta</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XI. Tímár László Tanulmányi Emlékverseny, Veszprém:</strong><br />\\r\\nDorner Boglárka – Tamara, Erdély Attila, Farkas Csongor, Szőcs Kinga Beáta – <strong>II. hely</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>X. Országos Pénzügyi Esettanulmány Verseny, Győr:</strong><br />\\r\\nBaumgartner Mónika, Benkő Zsolt, Rácz Béla Gergely – <strong>III. hely</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>IV. Dr. Papp László Számviteli Esettanulmány Verseny, Pécs:</strong><br />\\r\\nDorner Boglárka, Erdély Attila, Farkas Csongor,&nbsp;Szőcs Kinga, Baumgartner Mónika, Benkő Zsolt,&nbsp;Major Tamás, Kristály Csaba, Ábrahám Krisztina</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>XI. Csíkszeredai Nyílt Esettanulmány Verseny, Csíkszereda:</strong><br />\\nÁbrahám Krisztina – <strong>I. hely</strong><br /><strong>Részt vettek:</strong> Benkő Zsolt, Dorner Boglárka, Erdélyi Attila, Kristály Csaba, Major Tamás, Szőcs Kinga Beáta</p>\\n<p class=\\"rtejustify\\"><strong>IV. dr. Susánszky János Nemzetközi Esettanulmányi Verseny, Miskolc:</strong><br />\\nÁbrahám Krisztina, Benkő Zsolt, Major Tamás, Szőcs Kinga Beáta - <strong>leggyakorlatiasabb megoldás különdíj</strong></p>\\n<p class=\\"rtejustify\\"><strong>I.Pénzügyi és Számviteli Esettanulmányi Verseny, Budapest</strong>:</p>\\n<p class=\\"rtejustify\\">Baumgartner Mónika, Erdély Attila, Rácz Béla (alumni) - <strong>I. hely</strong></p>\\n<p class=\\"rtejustify\\"><strong>Kolozsvári Egyetemista Esettanulmány Versenyen 2012, Kolozsvár:</strong><br />\\nÁbrahám Krisztina, Ferencz Hunor – <strong>I. hely</strong><br />\\nBenkő Zsolt, Dorner Boglárka–Tamara, Farkas Csongor, Szőcs Kinga–Beáta – <strong>II. hely</strong><br />\\nDemeter Zselyke, Furdek Balázs, Rákóczi Roland, Salamon Ádám – <strong>dicséret</strong><br /><strong>Részvétel:</strong> Kristály Csaba</p>\\n<p class=\\"rtejustify\\"><strong>BCG Strategy Cup 2012, Budapest:</strong><br />\\nSzőcs Kinga Beáta - <strong>II. hely</strong></p>\\n<p class=\\"rtejustify\\"><strong>XIII. Országos Esettanulmány Verseny (OEV), Budapest:</strong><br />\\nDorner Boglárka Tamara, Erdély Attila, Farkas Csongor, Szőcs Kinga-Beáta</p>\\n<p class=\\"rtejustify\\"><strong>XI. Tímár László Tanulmányi Emlékverseny, Veszprém:</strong><br />\\nDorner Boglárka – Tamara, Erdély Attila, Farkas Csongor, Szőcs Kinga Beáta – <strong>II. hely</strong></p>\\n<p class=\\"rtejustify\\"><strong>X. Országos Pénzügyi Esettanulmány Verseny, Győr:</strong><br />\\nBaumgartner Mónika, Benkő Zsolt, Rácz Béla Gergely – <strong>III. hely</strong></p>\\n<p class=\\"rtejustify\\"><strong>IV. Dr. Papp László Számviteli Esettanulmány Verseny, Pécs:</strong><br />\\nDorner Boglárka, Erdély Attila, Farkas Csongor, Szőcs Kinga, Baumgartner Mónika, Benkő Zsolt, Major Tamás, Kristály Csaba, Ábrahám Krisztina</p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Marketing - Menedzsment szekció:</strong><br />\\r\\nErdély Attila -&nbsp;<strong>II. hely</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Marketing - Menedzsment szekció:</strong><br />\\nErdély Attila - <strong>II. hely</strong></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>dr. Christopher Ball,</strong> egyetemi tanár, MBA programvezető, Quinnipiac University<br />\\r\\n<strong>Székely Ádám,</strong> ügyvezető igazgató, InfoGroup<br />\\r\\n<strong>Jászkuti Bertalan,</strong> társtulajdonos/ügyvezető igazgató, Heal Partners<br />\\r\\n<strong>Karli Péter,</strong> társtulajdonos/ügyvezető igazgató, Heal Partners<br />\\r\\n<strong>Zala Ákos,</strong> ügyvezető igazgató Human Telex Consulting Kft.<br />\\r\\n<strong>dr. David Sims,</strong> a City University London – Cass Business School professzora<br />\\r\\n<strong>Éder Tamás,</strong> Élelmiszerfeldolgozók Országos Szövetségének elnöke, a Bonafarm PR igazgatója<br />\\r\\n<strong>Matskási István,&nbsp;</strong>Bonafarm csoport pénzügyi igazgatója</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>dr. Christopher Ball,</strong> egyetemi tanár, MBA programvezető, Quinnipiac University<br /><strong>Székely Ádám,</strong> ügyvezető igazgató, InfoGroup<br /><strong>Jászkuti Bertalan,</strong> társtulajdonos/ügyvezető igazgató, Heal Partners<br /><strong>Karli Péter,</strong> társtulajdonos/ügyvezető igazgató, Heal Partners<br /><strong>Zala Ákos,</strong> ügyvezető igazgató Human Telex Consulting Kft.<br /><strong>dr. David Sims,</strong> a City University London – Cass Business School professzora<br /><strong>Éder Tamás,</strong> Élelmiszerfeldolgozók Országos Szövetségének elnöke, a Bonafarm PR igazgatója<br /><strong>Matskási István, </strong>Bonafarm csoport pénzügyi igazgatója</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1421689549\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'737\',
        \'source\' => \'node/727\',
        \'alias\' => \'2011-2012-tevékenységi-beszámoló\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1164\',
      \'uid\' => \'3\',
      \'title\' => \'Török Léna\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'baff5868-83e7-4902-8650-c116cf274fbc\',
      \'nid\' => \'1164\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423231076\',
      \'changed\' => \'1423231076\',
      \'tnid\' => \'909\',
      \'translate\' => \'0\',
      \'uuid\' => \'1e779cfc-0308-4809-9641-3cbaadd3d807\',
      \'revision_timestamp\' => \'1423231076\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni - Program pentru Liceeni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni - Program pentru Liceeni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'570\',
            \'uid\' => \'3\',
            \'filename\' => \'törökléna Cropped.jpg\',
            \'uri\' => \'public://törökléna Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25084\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421854007\',
            \'type\' => \'image\',
            \'uuid\' => \'53dca2a3-9d1e-49de-9c74-4394160a47a2\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Török Léna\',
            \'format\' => NULL,
            \'safe_value\' => \'Török Léna\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Török Léna\',
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
      \'last_comment_timestamp\' => \'1423231076\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1175\',
        \'source\' => \'node/1164\',
        \'alias\' => \'török-léna\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'700\',
      \'uid\' => \'3\',
      \'title\' => \'Rodney Baker\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ea16d2bd-5c42-4436-af82-3892021a99c2\',
      \'nid\' => \'700\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421678161\',
      \'changed\' => \'1422710682\',
      \'tnid\' => \'700\',
      \'translate\' => \'0\',
      \'uuid\' => \'21d29d4c-7a4f-4e39-a359-7d43dd4f61ab\',
      \'revision_timestamp\' => \'1422710682\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>a London School of Economics professzora</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>a London School of Economics professzora</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'299\',
            \'uid\' => \'3\',
            \'filename\' => \'rodney.jpg\',
            \'uri\' => \'public://rodney.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'45757\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421678161\',
            \'type\' => \'image\',
            \'uuid\' => \'d5bd5aeb-77f0-4365-801a-7d4a9643eda4\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'210\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'210\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Rodney Baker\',
            \'format\' => NULL,
            \'safe_value\' => \'Rodney Baker\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Rodney Baker\',
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
      \'last_comment_timestamp\' => \'1421678161\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'710\',
        \'source\' => \'node/700\',
        \'alias\' => \'rodney-baker\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1178\',
      \'uid\' => \'3\',
      \'title\' => \'2011-2012 \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eebbf799-2041-40e5-9143-49aa0528013d\',
      \'nid\' => \'1178\',
      \'type\' => \'result\',
      \'language\' => \'en\',
      \'created\' => \'1423483751\',
      \'changed\' => \'1423577423\',
      \'tnid\' => \'727\',
      \'translate\' => \'0\',
      \'uuid\' => \'22b36979-41d0-4bfb-9a03-f91c7ae8a67f\',
      \'revision_timestamp\' => \'1423577423\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">In the 2011/2012 academic year members had the opportunity to participate at different trainings, and learned a lot from experts. They also participated at 10 case study competitions and won 8 prices, their results are remarkable.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">In the 2011/2012 academic year members had the opportunity to participate at different trainings, and learned a lot from experts. They also participated at 10 case study competitions and won 8 prices, their results are remarkable. </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>11th Open Case Study Competition, Miercurea Ciuc:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám – I. price</p>\\r\\n\\r\\n<p>Participation: Zsolt Benkő, Boglárka-Tamara Dorner, Attila Erdély, Csaba Kristály, Tamás Major, Kinga- Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>4th dr. Susánszky János International Case Study Competition, Miskolc:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám, Zsolt Benkő, Tamás Major and Kinga-Beáta Szőcs - special prize for the most&nbsp;applicable solution</p>\\r\\n\\r\\n<p><strong>1th Accounting and Finance Case Study Competition, Budapest:</strong></p>\\r\\n\\r\\n<p>Mónika Baumgartner, Attila Erdély, Béla Rácz (alumni) - I. price</p>\\r\\n\\r\\n<p><strong>Cluj-Napoca Student Case Study Competition 2012, Cluj Napoca:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám and Hunor Ferencz – I. price</p>\\r\\n\\r\\n<p>Zsolt Benkő, Boglárka–Tamara Dorner, Csongor Farkas and Kinga–Beáta Szőcs – II. price</p>\\r\\n\\r\\n<p>Zselyke Demeter, Balázs Furdek, Roland Rákóczi and Ádám Salamon - diplomas of mention</p>\\r\\n\\r\\n<p>Participation: Csaba Kristály</p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2012, Budapest:</strong></p>\\r\\n\\r\\n<p>Kinga-Beáta Szőcs - II. price</p>\\r\\n\\r\\n<p><strong>13th National Case Study Competition, Budapest:</strong></p>\\r\\n\\r\\n<p>Boglárka Tamara Dorner, Attila Erdély, Csongor Farkas, Kinga-Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>10th edition of the Finance Case Study Competition, Győr:</strong></p>\\r\\n\\r\\n<p>Mónika Baumgartner, Zsolt Benkő and Béla Gergely Rácz – III. price</p>\\r\\n\\r\\n<p><strong>4th Dr. Papp László Case Study Competition in Accounting, Pécs:</strong></p>\\r\\n\\r\\n<p>Boglárka Dorner, Attila Erdély, Csongor Farkas, Kinga Szőcs, Mónika Baumgartner, Zsolt Benkő, Tamás Major, Csaba Kristály, Krisztina Ábrahám</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>11th Open Case Study Competition, Miercurea Ciuc:</strong></p>\\n<p>Krisztina Ábrahám – I. price</p>\\n<p>Participation: Zsolt Benkő, Boglárka-Tamara Dorner, Attila Erdély, Csaba Kristály, Tamás Major, Kinga- Beáta Szőcs</p>\\n<p><strong>4th dr. Susánszky János International Case Study Competition, Miskolc:</strong></p>\\n<p>Krisztina Ábrahám, Zsolt Benkő, Tamás Major and Kinga-Beáta Szőcs - special prize for the most applicable solution</p>\\n<p><strong>1th Accounting and Finance Case Study Competition, Budapest:</strong></p>\\n<p>Mónika Baumgartner, Attila Erdély, Béla Rácz (alumni) - I. price</p>\\n<p><strong>Cluj-Napoca Student Case Study Competition 2012, Cluj Napoca:</strong></p>\\n<p>Krisztina Ábrahám and Hunor Ferencz – I. price</p>\\n<p>Zsolt Benkő, Boglárka–Tamara Dorner, Csongor Farkas and Kinga–Beáta Szőcs – II. price</p>\\n<p>Zselyke Demeter, Balázs Furdek, Roland Rákóczi and Ádám Salamon - diplomas of mention</p>\\n<p>Participation: Csaba Kristály</p>\\n<p><strong>BCG Strategy Cup 2012, Budapest:</strong></p>\\n<p>Kinga-Beáta Szőcs - II. price</p>\\n<p><strong>13th National Case Study Competition, Budapest:</strong></p>\\n<p>Boglárka Tamara Dorner, Attila Erdély, Csongor Farkas, Kinga-Beáta Szőcs</p>\\n<p><strong>10th edition of the Finance Case Study Competition, Győr:</strong></p>\\n<p>Mónika Baumgartner, Zsolt Benkő and Béla Gergely Rácz – III. price</p>\\n<p><strong>4th Dr. Papp László Case Study Competition in Accounting, Pécs:</strong></p>\\n<p>Boglárka Dorner, Attila Erdély, Csongor Farkas, Kinga Szőcs, Mónika Baumgartner, Zsolt Benkő, Tamás Major, Csaba Kristály, Krisztina Ábrahám</p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Marketing-Management&nbsp;section:</strong></p>\\r\\n\\r\\n<p>Attila Erdély –<em> II. price</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Marketing-Management section:</strong></p>\\n<p>Attila Erdély –<em> II. price</em></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>dr. Christopher Ball, </strong>professor at the Quinnipiac University,</p>\\r\\n\\r\\n<p><strong>Á</strong><strong>d</strong><strong>á</strong><strong>m Sz</strong><strong>é</strong><strong>kely, </strong>general manager of InfoGroup</p>\\r\\n\\r\\n<p><strong>J</strong><strong>á</strong><strong>szkuti Bertalan</strong>, general managers of the HealPartners Ltd.</p>\\r\\n\\r\\n<p><strong>Karli P</strong><strong>é</strong><strong>ter,</strong>general managers of the HealPartners Ltd.</p>\\r\\n\\r\\n<p><strong>Á</strong><strong>kos Zala,</strong>general manager of the Human Telex Consulting Ltd.</p>\\r\\n\\r\\n<p><strong>Tam</strong><strong>á</strong><strong>s </strong><strong>É</strong><strong>der, </strong>PR-manager, president of the Federation of Hungarian Food Industries</p>\\r\\n\\r\\n<p><strong>Istv</strong><strong>á</strong><strong>n Matsk</strong><strong>á</strong><strong>si, </strong>CFO, Bonafarm Group</p>\\r\\n\\r\\n<p><strong>dr. David Sims,</strong>professor at the City University London - Cass Business School</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>dr. Christopher Ball, </strong>professor at the Quinnipiac University,</p>\\n<p><strong>Á</strong><strong>d</strong><strong>á</strong><strong>m Sz</strong><strong>é</strong><strong>kely, </strong>general manager of InfoGroup</p>\\n<p><strong>J</strong><strong>á</strong><strong>szkuti Bertalan</strong>, general managers of the HealPartners Ltd.</p>\\n<p><strong>Karli P</strong><strong>é</strong><strong>ter,</strong>general managers of the HealPartners Ltd.</p>\\n<p><strong>Á</strong><strong>kos Zala,</strong>general manager of the Human Telex Consulting Ltd.</p>\\n<p><strong>Tam</strong><strong>á</strong><strong>s </strong><strong>É</strong><strong>der, </strong>PR-manager, president of the Federation of Hungarian Food Industries</p>\\n<p><strong>Istv</strong><strong>á</strong><strong>n Matsk</strong><strong>á</strong><strong>si, </strong>CFO, Bonafarm Group</p>\\n<p><strong>dr. David Sims,</strong>professor at the City University London - Cass Business School</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1423483751\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1189\',
        \'source\' => \'node/1178\',
        \'alias\' => \'2011-2012\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'991\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Ádám\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3807a941-f821-401c-a7c9-5da8c1868541\',
      \'nid\' => \'991\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226834\',
      \'changed\' => \'1423226834\',
      \'tnid\' => \'702\',
      \'translate\' => \'0\',
      \'uuid\' => \'253a1fc0-90a0-406c-9f5d-ec02d83b9ec9\',
      \'revision_timestamp\' => \'1423226834\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>managing director, InfoGroup</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>managing director, InfoGroup</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'565\',
            \'uid\' => \'3\',
            \'filename\' => \'szekely_adam Cropped.jpg\',
            \'uri\' => \'public://szekely_adam Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22414\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853651\',
            \'type\' => \'image\',
            \'uuid\' => \'cd9cb5a0-93f5-4a1e-bca3-28816c786b88\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Székely Ádám\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Ádám\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Székely Ádám\',
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
      \'last_comment_timestamp\' => \'1423226834\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1002\',
        \'source\' => \'node/991\',
        \'alias\' => \'székely-ádám\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1181\',
      \'uid\' => \'3\',
      \'title\' => \'2010-2011 \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'efd75441-422a-430f-82fc-a744708a1b09\',
      \'nid\' => \'1181\',
      \'type\' => \'result\',
      \'language\' => \'ro\',
      \'created\' => \'1423493960\',
      \'changed\' => \'1424263750\',
      \'tnid\' => \'726\',
      \'translate\' => \'0\',
      \'uuid\' => \'25ce0b67-22c1-49eb-94b6-86874b8ba41b\',
      \'revision_timestamp\' => \'1424263750\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">În anul academic 2010/2011 membrii GTK au participat la diferite competiții, la conferințe științifice național și internaționale cu success. Au avut posibilitate de a învăța la trainingurile unor experți renumiți.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">În anul academic 2010/2011 membrii GTK au participat la diferite competiții, la conferințe științifice național și internaționale cu success. Au avut posibilitate de a învăța la trainingurile unor experți renumiți.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>10-a edi</strong><strong>ţie a Concursului Deschis de Studii de Caz din Miercurea&nbsp;Ciuc:</strong></p>\\r\\n\\r\\n<p>Dorner Boglárka - Tamara és Szőcs Kinga - Beáta - <strong>locul II.</strong></p>\\r\\n\\r\\n<p>Rácz Béla - Gergely - <strong>locul II.</strong></p>\\r\\n\\r\\n<p><strong>12-a edi</strong><strong>ţ</strong><strong>ie a Concursului Na</strong><strong>ţ</strong><strong>ional de Studii de Caz, Budapesta:</strong></p>\\r\\n\\r\\n<p>Birton Réka, Barok István, Laczkó Dénes și Vincze Tamás – <strong>locul I.</strong></p>\\r\\n\\r\\n<p><strong>3-a edi</strong><strong>ţ</strong><strong>ie a Concursului de Studii de Caz </strong><strong>în Contabilitate „Dr. Papp&nbsp;L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong>”</strong><strong>, P</strong><strong>é</strong><strong>cs:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Dénes Laczkó şi Tamás Vincze - <strong>locul I.</strong></p>\\r\\n\\r\\n<p><strong>Au participat</strong>: Csongor Farkas şi Kinga Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>II-lea Concurs Interna</strong><strong>ţ</strong><strong>ional de Studii de Caz „dr. Sus</strong><strong>á</strong><strong>nszky J</strong><strong>á</strong><strong>nos</strong>”,&nbsp;<strong>Miskolc:</strong></p>\\r\\n\\r\\n<p>Béla-Gergely Rácz <strong>premiul pentru cea mai pragmatic</strong><strong>ă</strong><strong> solu</strong><strong>ţ</strong><strong>ie</strong></p>\\r\\n\\r\\n<p><strong>Concursul Universitar de Studii de caz din Cluj-Napoca 2011, Cluj-&nbsp;Napoca:</strong></p>\\r\\n\\r\\n<p>Dorner Boglárka-Tamara, Erdély Attila, Farkas Csongor și Szőcs&nbsp;Kinga Beáta – <strong>Locul I.</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Major Tamás și Ferencz Hunor – <strong>locul II.</strong></p>\\r\\n\\r\\n<p>Baumgartner Mónika - <strong>locul III.</strong></p>\\r\\n\\r\\n<p>Benkő Zsolt, Demeter Zselyke și László Tímea - <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\r\\n\\r\\n<p><strong>Au participat: </strong>Furdek Balázs, Rácz Béla-Gergely</p>\\r\\n\\r\\n<p><strong>9-lea Concurs de Studii de Caz </strong><strong>î</strong><strong>n domeniul Finan</strong><strong>ţ</strong><strong>elor, Gy</strong><strong>ő</strong><strong>r:</strong></p>\\r\\n\\r\\n<p>Dénes Laczkó - <strong>locul II.</strong></p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2011, Budapest:</strong></p>\\r\\n\\r\\n<p>Márta Lőrincz - <strong>locul I.</strong></p>\\r\\n\\r\\n<p><strong>A participat: </strong>Attila Erdély</p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2010, Budapest:</strong></p>\\r\\n\\r\\n<p>Kinga Beáta Szőcs - <strong>II. d</strong><strong>í</strong><strong>j</strong></p>\\r\\n\\r\\n<p>Boglárka Tamara Dorner - <strong>III. d</strong><strong>í</strong><strong>j</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>10-a edi</strong><strong>ţie a Concursului Deschis de Studii de Caz din Miercurea Ciuc:</strong></p>\\n<p>Dorner Boglárka - Tamara és Szőcs Kinga - Beáta - <strong>locul II.</strong></p>\\n<p>Rácz Béla - Gergely - <strong>locul II.</strong></p>\\n<p><strong>12-a edi</strong><strong>ţ</strong><strong>ie a Concursului Na</strong><strong>ţ</strong><strong>ional de Studii de Caz, Budapesta:</strong></p>\\n<p>Birton Réka, Barok István, Laczkó Dénes și Vincze Tamás – <strong>locul I.</strong></p>\\n<p><strong>3-a edi</strong><strong>ţ</strong><strong>ie a Concursului de Studii de Caz </strong><strong>în Contabilitate „Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong>”</strong><strong>, P</strong><strong>é</strong><strong>cs:</strong></p>\\n<p>István Barok, Réka Birton, Dénes Laczkó şi Tamás Vincze - <strong>locul I.</strong></p>\\n<p><strong>Au participat</strong>: Csongor Farkas şi Kinga Beáta Szőcs</p>\\n<p><strong>II-lea Concurs Interna</strong><strong>ţ</strong><strong>ional de Studii de Caz „dr. Sus</strong><strong>á</strong><strong>nszky J</strong><strong>á</strong><strong>nos</strong>”, <strong>Miskolc:</strong></p>\\n<p>Béla-Gergely Rácz <strong>premiul pentru cea mai pragmatic</strong><strong>ă</strong><strong> solu</strong><strong>ţ</strong><strong>ie</strong></p>\\n<p><strong>Concursul Universitar de Studii de caz din Cluj-Napoca 2011, Cluj- Napoca:</strong></p>\\n<p>Dorner Boglárka-Tamara, Erdély Attila, Farkas Csongor și Szőcs Kinga Beáta – <strong>Locul I.</strong></p>\\n<p>Ábrahám Krisztina, Major Tamás și Ferencz Hunor – <strong>locul II.</strong></p>\\n<p>Baumgartner Mónika - <strong>locul III.</strong></p>\\n<p>Benkő Zsolt, Demeter Zselyke și László Tímea - <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\n<p><strong>Au participat: </strong>Furdek Balázs, Rácz Béla-Gergely</p>\\n<p><strong>9-lea Concurs de Studii de Caz </strong><strong>î</strong><strong>n domeniul Finan</strong><strong>ţ</strong><strong>elor, Gy</strong><strong>ő</strong><strong>r:</strong></p>\\n<p>Dénes Laczkó - <strong>locul II.</strong></p>\\n<p><strong>BCG Strategy Cup 2011, Budapest:</strong></p>\\n<p>Márta Lőrincz - <strong>locul I.</strong></p>\\n<p><strong>A participat: </strong>Attila Erdély</p>\\n<p><strong>BCG Strategy Cup 2010, Budapest:</strong></p>\\n<p>Kinga Beáta Szőcs - <strong>II. d</strong><strong>í</strong><strong>j</strong></p>\\n<p>Boglárka Tamara Dorner - <strong>III. d</strong><strong>í</strong><strong>j</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Marketing–Management</strong></p>\\r\\n\\r\\n<p>Tamás Major:<strong> </strong><em>De la idee la întreprindere. Planul de afaceri al unei&nbsp;baze sportive.</em> - <strong>locul I.</strong></p>\\r\\n\\r\\n<p>Boglárka-Tamara Dorner:<strong> </strong><em>Aplicarea deciziilor bazate pe opţiuni reale&nbsp;în modelul ciclului de viaţă al produselor</em>. - <strong>locul II.</strong></p>\\r\\n\\r\\n<p>Attila Erdély:<strong> </strong><em>Decizii strategice în industria cărnii de vită</em>. - <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\r\\n\\r\\n<p>Csongor Farkas: <em>Efectul deciziilor strategice asupra valorii&nbsp;întreprinderii</em>.</p>\\r\\n\\r\\n<p>Kinga-Beáta Szőcs:<strong> </strong><em>Evaluarea proiectelor. Studiu de caz Festivalul&nbsp;Peninsula.</em></p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Finan</strong><strong>ţ</strong><strong>e</strong></p>\\r\\n\\r\\n<p>Henrietta Dóczi, Attila Erdély, Éva Felfalusi, Renáta Knoch, Kinga&nbsp;Enikő Patka:<strong> </strong><em>Sisteme de rating la băncile comerciale române</em>. - <strong>locul&nbsp;III.</strong></p>\\r\\n\\r\\n<p>Dalma-Zsuzsa Farkas, Balázs-Márton Furdek, Noémi Marton, Tímea&nbsp;Rácz:<strong> </strong><em>Analiza empirică a posibilităţii de faliment în cazul întreprinderilor române prezente la bursă.</em> - <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Marketing–Management</strong></p>\\n<p>Tamás Major:<strong> </strong><em>De la idee la întreprindere. Planul de afaceri al unei baze sportive.</em> - <strong>locul I.</strong></p>\\n<p>Boglárka-Tamara Dorner:<strong> </strong><em>Aplicarea deciziilor bazate pe opţiuni reale în modelul ciclului de viaţă al produselor</em>. - <strong>locul II.</strong></p>\\n<p>Attila Erdély:<strong> </strong><em>Decizii strategice în industria cărnii de vită</em>. - <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\n<p>Csongor Farkas: <em>Efectul deciziilor strategice asupra valorii întreprinderii</em>.</p>\\n<p>Kinga-Beáta Szőcs:<strong> </strong><em>Evaluarea proiectelor. Studiu de caz Festivalul Peninsula.</em></p>\\n<p> </p>\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Finan</strong><strong>ţ</strong><strong>e</strong></p>\\n<p>Henrietta Dóczi, Attila Erdély, Éva Felfalusi, Renáta Knoch, Kinga Enikő Patka:<strong> </strong><em>Sisteme de rating la băncile comerciale române</em>. - <strong>locul III.</strong></p>\\n<p>Dalma-Zsuzsa Farkas, Balázs-Márton Furdek, Noémi Marton, Tímea Rácz:<strong> </strong><em>Analiza empirică a posibilităţii de faliment în cazul întreprinderilor române prezente la bursă.</em> - <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>P</strong><strong>é</strong><strong>ter Hajd</strong><strong>ú,&nbsp;</strong>general manager (Emerging Markets East), Cisco Systems&nbsp;International</p>\\r\\n\\r\\n<p><strong>dr. Christopher Ball,&nbsp;</strong>profesor universitar, director de program MBA, Quinnipiac&nbsp;University</p>\\r\\n\\r\\n<p><strong>E</strong><strong>ö</strong><strong>rs Huba</strong>,&nbsp;director general, IFUA Horváth &amp; Partners</p>\\r\\n\\r\\n<p><strong>B</strong><strong>é</strong><strong>la Glattfelder</strong>,&nbsp;parlamentar european</p>\\r\\n\\r\\n<p><strong>dr. M</strong><strong>ó</strong><strong>nika Kuti</strong>,&nbsp;lector universitar, Universitatea din Pécs</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>P</strong><strong>é</strong><strong>ter Hajd</strong><strong>ú, </strong>general manager (Emerging Markets East), Cisco Systems International</p>\\n<p><strong>dr. Christopher Ball, </strong>profesor universitar, director de program MBA, Quinnipiac University</p>\\n<p><strong>E</strong><strong>ö</strong><strong>rs Huba</strong>, director general, IFUA Horváth &amp; Partners</p>\\n<p><strong>B</strong><strong>é</strong><strong>la Glattfelder</strong>, parlamentar european</p>\\n<p><strong>dr. M</strong><strong>ó</strong><strong>nika Kuti</strong>, lector universitar, Universitatea din Pécs</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>4. \\"Managerial Challenges of the Contemporary Society\\":&nbsp;Barok Istv</strong><strong>á</strong><strong>n </strong><strong>é</strong><strong>s Dorner Bogl</strong><strong>á</strong><strong>rka (2011)</strong>: <em>Food Industry Suppliers\'&nbsp;Management Strategies During the Economic Crisis</em></p>\\r\\n\\r\\n<p><strong>8-a edi</strong><strong>ţ</strong><strong>ie a Conferin</strong><strong>ţ</strong><strong>ei \\"Europa Central</strong><strong>ă</strong><strong>\\": </strong>„Noutăţi în&nbsp;managementul strategic”: <strong>Dorner Bogl</strong><strong>á</strong><strong>rka, Erd</strong><strong>ély Attila,&nbsp;Farkas Csongor </strong><strong>é</strong><strong>s Sz</strong><strong>ő</strong><strong>cs Kinga</strong></p>\\r\\n\\r\\n<p><strong>„</strong><strong>Liga campionilor” – Conferin</strong><strong>ţă</strong><strong> de </strong><strong>Ş</strong><strong>tiin</strong><strong>ţe Sociale: Istv</strong><strong>á</strong><strong>n Barok, Bogl</strong><strong>á</strong><strong>rka-Tamara Dorner:&nbsp;</strong><em>Strategiile de&nbsp;criză a comercianţilor din domeniul industriei alimentare – cazul&nbsp;Romchemicals SRL. –&nbsp;</em><strong>locul II.</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>4. \\"Managerial Challenges of the Contemporary Society\\": Barok Istv</strong><strong>á</strong><strong>n </strong><strong>é</strong><strong>s Dorner Bogl</strong><strong>á</strong><strong>rka (2011)</strong>: <em>Food Industry Suppliers\' Management Strategies During the Economic Crisis</em></p>\\n<p><strong>8-a edi</strong><strong>ţ</strong><strong>ie a Conferin</strong><strong>ţ</strong><strong>ei \\"Europa Central</strong><strong>ă</strong><strong>\\": </strong>„Noutăţi în managementul strategic”: <strong>Dorner Bogl</strong><strong>á</strong><strong>rka, Erd</strong><strong>ély Attila, Farkas Csongor </strong><strong>é</strong><strong>s Sz</strong><strong>ő</strong><strong>cs Kinga</strong></p>\\n<p><strong>„</strong><strong>Liga campionilor” – Conferin</strong><strong>ţă</strong><strong> de </strong><strong>Ş</strong><strong>tiin</strong><strong>ţe Sociale: Istv</strong><strong>á</strong><strong>n Barok, Bogl</strong><strong>á</strong><strong>rka-Tamara Dorner: </strong><em>Strategiile de criză a comercianţilor din domeniul industriei alimentare – cazul Romchemicals SRL. – </em><strong>locul II.</strong></p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Business Financing:&nbsp;</strong>Márta Lőrincz<strong> – </strong><strong>locul II.</strong></p>\\r\\n\\r\\n<p><strong>Management Strategic: </strong>Dénes Laczkó şi Tamás Vincze<strong> - </strong><strong>locul II.</strong></p>\\r\\n\\r\\n<p><strong>Au participat:&nbsp;</strong>Barok István, Dorner Boglárka</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Business Financing: </strong>Márta Lőrincz<strong> – </strong><strong>locul II.</strong></p>\\n<p><strong>Management Strategic: </strong>Dénes Laczkó şi Tamás Vincze<strong> - </strong><strong>locul II.</strong></p>\\n<p><strong>Au participat: </strong>Barok István, Dorner Boglárka</p>\\n",
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
      \'last_comment_timestamp\' => \'1423493960\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1192\',
        \'source\' => \'node/1181\',
        \'alias\' => \'2010-2011\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1162\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Linda\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4cf70686-ac0c-4d47-8d4e-55942bcc44bf\',
      \'nid\' => \'1162\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423231066\',
      \'changed\' => \'1423231066\',
      \'tnid\' => \'722\',
      \'translate\' => \'0\',
      \'uuid\' => \'2f635a44-0d66-4420-ab14-eddf2b277216\',
      \'revision_timestamp\' => \'1423231066\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni - Program pentru Liceeni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni - Program pentru Liceeni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'584\',
            \'uid\' => \'3\',
            \'filename\' => \'SzekelyL Cropped.jpg\',
            \'uri\' => \'public://SzekelyL Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31919\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855492\',
            \'type\' => \'image\',
            \'uuid\' => \'d7149b07-78d3-4e9e-8a28-a6fa689a4e0e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Székely Linda\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Linda\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Székely Linda\',
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
      \'last_comment_timestamp\' => \'1423231066\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1173\',
        \'source\' => \'node/1162\',
        \'alias\' => \'székely-linda\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'656\',
      \'uid\' => \'3\',
      \'title\' => \'Rácz Béla Gergely\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'66ff9f7e-869f-43ab-9f88-6d6299a264ac\',
      \'nid\' => \'656\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421675745\',
      \'changed\' => \'1421675745\',
      \'tnid\' => \'656\',
      \'translate\' => \'0\',
      \'uuid\' => \'30dc00ee-4ff1-4a6c-b619-ba3ac7484372\',
      \'revision_timestamp\' => \'1421675745\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\r\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'253\',
            \'uid\' => \'3\',
            \'filename\' => \'RaczBela.jpg\',
            \'uri\' => \'public://RaczBela.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34537\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675745\',
            \'type\' => \'image\',
            \'uuid\' => \'a2266b74-ae09-44e7-8ad6-363c3e19734b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés,&nbsp;Vállalati pénzügyi menedzsment&nbsp;szakirány<br />\\r\\n2007-2010: BBTE KGTK, egyetemi&nbsp;kézpés, magyar tagozat, Bank és&nbsp;Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés, Vállalati pénzügyi menedzsment szakirány<br />\\n2007-2010: BBTE KGTK, egyetemi kézpés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Rácz Béla Gergely\',
            \'format\' => NULL,
            \'safe_value\' => \'Rácz Béla Gergely\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Rácz Béla Gergely\',
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
      \'last_comment_timestamp\' => \'1421675745\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'666\',
        \'source\' => \'node/656\',
        \'alias\' => \'rácz-béla-gergely-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'662\',
      \'uid\' => \'3\',
      \'title\' => \'Szőcs Kinga\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2be2d838-ac36-4f35-971a-3a8b2d0ace9c\',
      \'nid\' => \'662\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421676304\',
      \'changed\' => \'1421850617\',
      \'tnid\' => \'662\',
      \'translate\' => \'0\',
      \'uuid\' => \'317d8070-5551-4a00-89c0-af289dcf5e60\',
      \'revision_timestamp\' => \'1421850617\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Bonafarm Zrt., Gazdasági Vezetőképző Program (Projekt menedzser) - Budapest</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Bonafarm Zrt., Gazdasági Vezetőképző Program (Projekt menedzser) - Budapest</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Szabadidejében sportol, olvas, színházba jár és finomakat főz, süt (legalább is mások véleménye alapján :D).<br />\\r\\nKinga úgy gondolja, hogy a GTK-ban végzett kitartó munka és kihívások jelentősen segítették nemcsak az egyetemi feladatok hatékonyabb elvégzésében, hanem jelenlegi munkája során is stabil alapot és előnyt jelentenek. Ezekre építve pedig sokkal könnyebb a fejlődés, mint a nulláról kezdeni. Mindezek mellett, Kinga számára, ami a legfontosabb, a GTK megtanít kitartó csapatjátékos lenni.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Mindezekért és a nagyszerű közösségért, amelyet a GTK tagjaként ismert meg és jelenleg is része az életének, ha újrakezdené az egyetemet, a GTK-ba mindenképpen jelentkezne.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Szabadidejében sportol, olvas, színházba jár és finomakat főz, süt (legalább is mások véleménye alapján :D).<br />\\nKinga úgy gondolja, hogy a GTK-ban végzett kitartó munka és kihívások jelentősen segítették nemcsak az egyetemi feladatok hatékonyabb elvégzésében, hanem jelenlegi munkája során is stabil alapot és előnyt jelentenek. Ezekre építve pedig sokkal könnyebb a fejlődés, mint a nulláról kezdeni. Mindezek mellett, Kinga számára, ami a legfontosabb, a GTK megtanít kitartó csapatjátékos lenni.</p>\\n<p class=\\"rtejustify\\">Mindezekért és a nagyszerű közösségért, amelyet a GTK tagjaként ismert meg és jelenleg is része az életének, ha újrakezdené az egyetemet, a GTK-ba mindenképpen jelentkezne.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'540\',
            \'uid\' => \'3\',
            \'filename\' => \'Szocs_Kinga Cropped.jpg\',
            \'uri\' => \'public://Szocs_Kinga Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'28220\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421850617\',
            \'type\' => \'image\',
            \'uuid\' => \'8ded5e1f-ff1a-4990-8f70-d15ccd38c4f3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2008-2011: BBTE KGTK, egyetemi képzés, magyar tagozat, Menedzsment szakirány</p>\\r\\n\\r\\n<p>2009-2010: PTE GTK, egyetemi képzés, Erasmus ösztöndíj</p>\\r\\n\\r\\n<p>2011-2013: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalkozás menedzsment szakirány</p>\\r\\n\\r\\n<p>2012-2013: BCE GTK, mesteri részképzés, Logisztika szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2008-2011: BBTE KGTK, egyetemi képzés, magyar tagozat, Menedzsment szakirány</p>\\n<p>2009-2010: PTE GTK, egyetemi képzés, Erasmus ösztöndíj</p>\\n<p>2011-2013: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalkozás menedzsment szakirány</p>\\n<p>2012-2013: BCE GTK, mesteri részképzés, Logisztika szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szőcs Kinga\',
            \'format\' => NULL,
            \'safe_value\' => \'Szőcs Kinga\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Szőcs Kinga\',
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
      \'last_comment_timestamp\' => \'1421676304\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'672\',
        \'source\' => \'node/662\',
        \'alias\' => \'szőcs-kinga\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1125\',
      \'uid\' => \'3\',
      \'title\' => \'Szakács Szilárd\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'01301b09-22c4-4bab-aadb-30ba9e7082da\',
      \'nid\' => \'1125\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230535\',
      \'changed\' => \'1423230535\',
      \'tnid\' => \'663\',
      \'translate\' => \'0\',
      \'uuid\' => \'31b49e83-22f0-4f81-9411-9a4c04519e24\',
      \'revision_timestamp\' => \'1423230535\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MIG Bank Ltd, Lausanne, Svájc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MIG Bank Ltd, Lausanne, Svájc</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Szilárd egy tanéven keresztül (2009-2010) volt tagja a Gazdasági Tanácsadó Klubnak és úgy véli, hogy az egyetemi évek alatt egyik legjobb döntése volt a GTK-ba való belépése. Véleménye szerint a GTK alapos felkészítést biztosít, amely során olyan tudással gazdagodnak tagjai, mely nélkülözhetetlen a sikeres karrierépítéshez.<br />\\r\\nAz egyetemi évek alatt Szilárd nagy rajongója volt az egyetemen kívüli tevékenységeknek, versenyeknek. Részt vett közel 10 esettanulmány versenyen és 5 esetben díjazták. Több szakmai publikációja is megjelent, valamint egy ETDK-s 1. díjjal, valamint egy OTDK-s 3. díjjal is büszkélkedhet.<br />\\r\\nSzilárd 2008-tól aktív a munkaerőpiacon, 3 évig a Kárpátia Magyar-Román Kereskedelmi és Iparkamaránál, majd a marosvásárhelyi MarsoRom Kft-nél tevékenykedett. 2011 októberétől a svájci MIG Banknál a Közép-Kelet Európai régióra kiterjedő értékesítői, elemzői és piackutatási feladatokat látja el.<br />\\r\\nSzilárd nagy CFR rajongó, szereti a sportot és a társaságot.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Szilárd egy tanéven keresztül (2009-2010) volt tagja a Gazdasági Tanácsadó Klubnak és úgy véli, hogy az egyetemi évek alatt egyik legjobb döntése volt a GTK-ba való belépése. Véleménye szerint a GTK alapos felkészítést biztosít, amely során olyan tudással gazdagodnak tagjai, mely nélkülözhetetlen a sikeres karrierépítéshez.<br />\\nAz egyetemi évek alatt Szilárd nagy rajongója volt az egyetemen kívüli tevékenységeknek, versenyeknek. Részt vett közel 10 esettanulmány versenyen és 5 esetben díjazták. Több szakmai publikációja is megjelent, valamint egy ETDK-s 1. díjjal, valamint egy OTDK-s 3. díjjal is büszkélkedhet.<br />\\nSzilárd 2008-tól aktív a munkaerőpiacon, 3 évig a Kárpátia Magyar-Román Kereskedelmi és Iparkamaránál, majd a marosvásárhelyi MarsoRom Kft-nél tevékenykedett. 2011 októberétől a svájci MIG Banknál a Közép-Kelet Európai régióra kiterjedő értékesítői, elemzői és piackutatási feladatokat látja el.<br />\\nSzilárd nagy CFR rajongó, szereti a sportot és a társaságot.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'260\',
            \'uid\' => \'3\',
            \'filename\' => \'szsz.jpg\',
            \'uri\' => \'public://szsz.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'70828\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676382\',
            \'type\' => \'image\',
            \'uuid\' => \'724f6db4-e391-4a2f-a5e3-c5b5978d9b27\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'188\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'188\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2005-2008: BBTE KGTK, egyetemi képzés, Bank és Pénzügy.<br />\\r\\n2008-2010: BBTE KGTK, mesteri képzés, Projektmenedzsment és –értékelés.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2005-2008: BBTE KGTK, egyetemi képzés, Bank és Pénzügy.<br />\\n2008-2010: BBTE KGTK, mesteri képzés, Projektmenedzsment és –értékelés.</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Szakács Szilárd\',
            \'format\' => NULL,
            \'safe_value\' => \'Szakács Szilárd\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
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
      \'last_comment_timestamp\' => \'1423230535\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1136\',
        \'source\' => \'node/1125\',
        \'alias\' => \'szakács-szilárd\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'992\',
      \'uid\' => \'3\',
      \'title\' => \'Takács József\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'27e789a0-8064-4202-b3d3-a35cea684bbf\',
      \'nid\' => \'992\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226863\',
      \'changed\' => \'1423226863\',
      \'tnid\' => \'683\',
      \'translate\' => \'0\',
      \'uuid\' => \'36396b7c-30ee-4787-941d-072e087fad56\',
      \'revision_timestamp\' => \'1423226863\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Head of Strategy and Business Development, Vodafone Hungary</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Head of Strategy and Business Development, Vodafone Hungary</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'280\',
            \'uid\' => \'3\',
            \'filename\' => \'jozsef takacs.jpg\',
            \'uri\' => \'public://jozsef takacs.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25269\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421677417\',
            \'type\' => \'image\',
            \'uuid\' => \'abcf4418-da2c-4f16-965c-51927d84af9a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Takács József\',
            \'format\' => NULL,
            \'safe_value\' => \'Takács József\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Takács József\',
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
      \'last_comment_timestamp\' => \'1423226863\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1003\',
        \'source\' => \'node/992\',
        \'alias\' => \'takács-józsef\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'698\',
      \'uid\' => \'3\',
      \'title\' => \'Radics László\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'afb435dd-ade2-4e17-97a3-52b826a8e40b\',
      \'nid\' => \'698\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421677982\',
      \'changed\' => \'1422710634\',
      \'tnid\' => \'698\',
      \'translate\' => \'0\',
      \'uuid\' => \'3649f0cd-0a83-4f5c-a168-2d57be614483\',
      \'revision_timestamp\' => \'1422710634\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>a Budapesti Gazdasági Főiskola tudományos főmunkatársa, a SmartLab Tanácsadó Kft. alapító vezetője</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>a Budapesti Gazdasági Főiskola tudományos főmunkatársa, a SmartLab Tanácsadó Kft. alapító vezetője</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'558\',
            \'uid\' => \'3\',
            \'filename\' => \'radacsi_laszlo Cropped Cropped.jpg\',
            \'uri\' => \'public://radacsi_laszlo Cropped Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'26759\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852849\',
            \'type\' => \'image\',
            \'uuid\' => \'3331cf9b-fd47-4b17-bb5f-6c960d85d9d4\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Radics László\',
            \'format\' => NULL,
            \'safe_value\' => \'Radics László\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Radics László\',
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
      \'last_comment_timestamp\' => \'1421677982\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'708\',
        \'source\' => \'node/698\',
        \'alias\' => \'radics-lászló\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'978\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Bálint\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1e693243-05d8-41ef-ad62-6dbbe7bb8e0e\',
      \'nid\' => \'978\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226419\',
      \'changed\' => \'1423226419\',
      \'tnid\' => \'695\',
      \'translate\' => \'0\',
      \'uuid\' => \'3839c2dd-3e3f-4422-bed1-158c080d79d6\',
      \'revision_timestamp\' => \'1423226419\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>lector universitar, Universitatea Babeş-Bolyai</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>lector universitar, Universitatea Babeş-Bolyai</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'548\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy Balint Cropped.jpg\',
            \'uri\' => \'public://Nagy Balint Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30199\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852476\',
            \'type\' => \'image\',
            \'uuid\' => \'0353aa5c-b487-42ee-b4ca-24dc5d5c38bd\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Nagy Bálint\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Bálint\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Nagy Bálint\',
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
      \'last_comment_timestamp\' => \'1423226419\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'989\',
        \'source\' => \'node/978\',
        \'alias\' => \'nagy-bálint\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1151\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Réka\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'18f37988-f762-4eed-909c-15fc19360582\',
      \'nid\' => \'1151\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230921\',
      \'changed\' => \'1423230921\',
      \'tnid\' => \'719\',
      \'translate\' => \'0\',
      \'uuid\' => \'384c995d-e663-4cfb-a884-16d7a7dd96d0\',
      \'revision_timestamp\' => \'1423230921\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Highschool alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Highschool alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'318\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy_Reka.jpg\',
            \'uri\' => \'public://Nagy_Reka.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'36369\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421680443\',
            \'type\' => \'image\',
            \'uuid\' => \'56fcd732-7a60-4d7a-8b03-f93489faf756\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'241\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'241\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Nagy Réka\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Réka\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Réka\',
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
      \'last_comment_timestamp\' => \'1423230921\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1162\',
        \'source\' => \'node/1151\',
        \'alias\' => \'nagy-réka\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1183\',
      \'uid\' => \'3\',
      \'title\' => \'2009-2010\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1239bf2d-5c7d-4a8c-b408-0c7e7013d844\',
      \'nid\' => \'1183\',
      \'type\' => \'result\',
      \'language\' => \'ro\',
      \'created\' => \'1423494783\',
      \'changed\' => \'1424263319\',
      \'tnid\' => \'725\',
      \'translate\' => \'0\',
      \'uuid\' => \'3b3942a3-b5a2-4792-a739-fc34b4c94243\',
      \'revision_timestamp\' => \'1424263319\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>În anul academic 2009/2010 membrii GTK au participat la diferite competiții cu rezultate remarcabile, și au avut ocazie de a lua parte la tarininguri.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>În anul academic 2009/2010 membrii GTK au participat la diferite competiții cu rezultate remarcabile, și au avut ocazie de a lua parte la tarininguri.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Concursul de Studii de caz </strong><strong>în domeniul&nbsp;contabilit</strong><strong>ăţ</strong><strong>ii “Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong>”</strong><strong>, P</strong><strong>é</strong><strong>cs:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Dénes Laczkó şi Tamás&nbsp;Vincze - <strong>locul II.</strong></p>\\r\\n\\r\\n<p><strong>Au participat: </strong>Csongor Farkas şi Kinga Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2009, Budapesta:</strong></p>\\r\\n\\r\\n<p>Réka Birton și Dénes Laczkó - <strong>locul III.</strong></p>\\r\\n\\r\\n<p><strong>Concursul de Studii de Caz </strong><strong>î</strong><strong>n Finan</strong><strong>ţ</strong><strong>e:</strong></p>\\r\\n\\r\\n<p>Éva Lakatos - <strong>locul II.</strong></p>\\r\\n\\r\\n<p>Réka Birton, Dénes Laczkó, Szilárd Szakács&nbsp;şi Tamás Vincze - <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\r\\n\\r\\n<p><strong>Au participat: </strong>Boglárka Dorner, Attila Erdély,&nbsp;Csongor Farkas şi Kinga Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>XI.-lea Concurs Na</strong><strong>ţional de Studii de Caz,&nbsp;Budapesta:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Dénes Laczkó și Tamás&nbsp;Vincze</p>\\r\\n\\r\\n<p><strong>Concursul Na</strong><strong>ţional Financiar de Studiu de Caz&nbsp;(OPEV), Gy</strong><strong>ő</strong><strong>r:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton - <strong>locul III.</strong></p>\\r\\n\\r\\n<p><strong>Concursul de studii de caz </strong><strong>î</strong><strong>n management 2009:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton,&nbsp;Dénes Laczkó şi Tamás Vincze - <strong>locul I.</strong></p>\\r\\n\\r\\n<p>Béla-Gergely Rácz - <strong>locul II.</strong></p>\\r\\n\\r\\n<p>Szilárd Szakács şi Krisztián Székely - <strong>locul III.</strong></p>\\r\\n\\r\\n<p>Boglárka Dorner, Attila Erdély,&nbsp;Csongor Farkas, Kinga Beáta Szőcs şi Éva Lakatos -&nbsp;<strong>men</strong><strong>ţ</strong><strong>iuni</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Concursul de Studii de caz </strong><strong>în domeniul contabilit</strong><strong>ăţ</strong><strong>ii “Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong>”</strong><strong>, P</strong><strong>é</strong><strong>cs:</strong></p>\\n<p>István Barok, Réka Birton, Dénes Laczkó şi Tamás Vincze - <strong>locul II.</strong></p>\\n<p><strong>Au participat: </strong>Csongor Farkas şi Kinga Beáta Szőcs</p>\\n<p><strong>BCG Strategy Cup 2009, Budapesta:</strong></p>\\n<p>Réka Birton și Dénes Laczkó - <strong>locul III.</strong></p>\\n<p><strong>Concursul de Studii de Caz </strong><strong>î</strong><strong>n Finan</strong><strong>ţ</strong><strong>e:</strong></p>\\n<p>Éva Lakatos - <strong>locul II.</strong></p>\\n<p>Réka Birton, Dénes Laczkó, Szilárd Szakács şi Tamás Vincze - <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\n<p><strong>Au participat: </strong>Boglárka Dorner, Attila Erdély, Csongor Farkas şi Kinga Beáta Szőcs</p>\\n<p><strong>XI.-lea Concurs Na</strong><strong>ţional de Studii de Caz, Budapesta:</strong></p>\\n<p>István Barok, Réka Birton, Dénes Laczkó și Tamás Vincze</p>\\n<p><strong>Concursul Na</strong><strong>ţional Financiar de Studiu de Caz (OPEV), Gy</strong><strong>ő</strong><strong>r:</strong></p>\\n<p>István Barok, Réka Birton - <strong>locul III.</strong></p>\\n<p><strong>Concursul de studii de caz </strong><strong>î</strong><strong>n management 2009:</strong></p>\\n<p>István Barok, Réka Birton, Dénes Laczkó şi Tamás Vincze - <strong>locul I.</strong></p>\\n<p>Béla-Gergely Rácz - <strong>locul II.</strong></p>\\n<p>Szilárd Szakács şi Krisztián Székely - <strong>locul III.</strong></p>\\n<p>Boglárka Dorner, Attila Erdély, Csongor Farkas, Kinga Beáta Szőcs şi Éva Lakatos - <strong>men</strong><strong>ţ</strong><strong>iuni</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Marketing – Management</strong></p>\\r\\n\\r\\n<p>Dénes Laczkó, Tamás Vincze:<strong> </strong><em>De la grâu până la pâine – Puncte strategice&nbsp;în industria autohtonă a produselor cerealiere -</em><strong>&nbsp;locul I.</strong></p>\\r\\n\\r\\n<p>Boglárka-Tamara Dorner, Attila Erdély, Kinga&nbsp;Beáta Szőcs:<strong> </strong>New Public Management – Aplicarea&nbsp;tehnicilor de management în administraţia&nbsp;şcolară -&nbsp;<strong>men</strong><strong>ţiune</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Marketing – Management</strong></p>\\n<p>Dénes Laczkó, Tamás Vincze:<strong> </strong><em>De la grâu până la pâine – Puncte strategice în industria autohtonă a produselor cerealiere -</em><strong> locul I.</strong></p>\\n<p>Boglárka-Tamara Dorner, Attila Erdély, Kinga Beáta Szőcs:<strong> </strong>New Public Management – Aplicarea tehnicilor de management în administraţia şcolară - <strong>men</strong><strong>ţiune</strong></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Á</strong><strong>kos Zala, </strong>director general, Human Telex Consulting</p>\\r\\n\\r\\n<p><strong>Bal</strong><strong>á</strong><strong>zs Heidrich, </strong>consultant, Human Telex Consulting</p>\\r\\n\\r\\n<p><strong>Magor K</strong><strong>á</strong><strong>d</strong><strong>á</strong><strong>r, </strong>lector universitar, Universitatea Babeş-Bolyai</p>\\r\\n\\r\\n<p><strong>Tam</strong><strong>á</strong><strong>s </strong><strong>Á</strong><strong>kos, </strong>director general retail banking, MKB Bank</p>\\r\\n\\r\\n<p><strong>P</strong><strong>é</strong><strong>ter Z</strong><strong>á</strong><strong>boji, </strong>preşedinte, European Entrepreneurship Foundation</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Á</strong><strong>kos Zala, </strong>director general, Human Telex Consulting</p>\\n<p><strong>Bal</strong><strong>á</strong><strong>zs Heidrich, </strong>consultant, Human Telex Consulting</p>\\n<p><strong>Magor K</strong><strong>á</strong><strong>d</strong><strong>á</strong><strong>r, </strong>lector universitar, Universitatea Babeş-Bolyai</p>\\n<p><strong>Tam</strong><strong>á</strong><strong>s </strong><strong>Á</strong><strong>kos, </strong>director general retail banking, MKB Bank</p>\\n<p><strong>P</strong><strong>é</strong><strong>ter Z</strong><strong>á</strong><strong>boji, </strong>preşedinte, European Entrepreneurship Foundation</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1423494783\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1194\',
        \'source\' => \'node/1183\',
        \'alias\' => \'2009-2010\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1153\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó Júlia\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3fbe62e2-f039-4199-8fc9-81c22f3d4985\',
      \'nid\' => \'1153\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230932\',
      \'changed\' => \'1423230932\',
      \'tnid\' => \'721\',
      \'translate\' => \'0\',
      \'uuid\' => \'3e853d1b-f80d-40eb-af90-1b70ca5e9366\',
      \'revision_timestamp\' => \'1423230932\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Highschool alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Highschool alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'583\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo Cropped.jpg\',
            \'uri\' => \'public://szabo Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34950\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855489\',
            \'type\' => \'image\',
            \'uuid\' => \'0b570aaa-bc44-47c1-9624-05ac76d81c41\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Szabó Júlia\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó Júlia\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Szabó Júlia\',
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
      \'last_comment_timestamp\' => \'1423230932\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1164\',
        \'source\' => \'node/1153\',
        \'alias\' => \'szabó-júlia\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1133\',
      \'uid\' => \'3\',
      \'title\' => \'Vincze Tamás\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4f9fb3b3-54a7-4a9a-8eb2-d5f77354959f\',
      \'nid\' => \'1133\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230577\',
      \'changed\' => \'1423230577\',
      \'tnid\' => \'664\',
      \'translate\' => \'0\',
      \'uuid\' => \'3f882809-04bb-4825-a0c3-1a4f59a7c152\',
      \'revision_timestamp\' => \'1423230577\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>East Grain SRL – kereskedelmi igazgató</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>East Grain SRL – kereskedelmi igazgató</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Tamás közgázas életének első évében jelentkezett a GTK-ba, aminek minden lépcsőfokát végigjárta: a rendes tagi státusztól, szeniori, majd rövid időre a szervezet koordinátor helyettesi pozíciójáig jutott el. Jelenleg az alumni tagok egyre bővülő listáját gyarapítja.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A GTK-nak elsősorban a munkához való pozitív hozzáállást és a rendszerben való gondolkodást köszönheti - meg természetesen egy sokoldalú szakmai és baráti közösséghez való tartozást.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Karrierét a piackutató és tanácsadó ágazatban kezdte, de dolgozott a megújuló-energia ágazatban, turizmusban és a bankrendszerben is. Jelenleg gabona kereskedőként igyekszik kamatoztatni a főképp GTK-ban szerzett sokszínű gazdasági ismereteit</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Tamás közgázas életének első évében jelentkezett a GTK-ba, aminek minden lépcsőfokát végigjárta: a rendes tagi státusztól, szeniori, majd rövid időre a szervezet koordinátor helyettesi pozíciójáig jutott el. Jelenleg az alumni tagok egyre bővülő listáját gyarapítja.</p>\\n<p class=\\"rtejustify\\">A GTK-nak elsősorban a munkához való pozitív hozzáállást és a rendszerben való gondolkodást köszönheti - meg természetesen egy sokoldalú szakmai és baráti közösséghez való tartozást.</p>\\n<p class=\\"rtejustify\\">Karrierét a piackutató és tanácsadó ágazatban kezdte, de dolgozott a megújuló-energia ágazatban, turizmusban és a bankrendszerben is. Jelenleg gabona kereskedőként igyekszik kamatoztatni a főképp GTK-ban szerzett sokszínű gazdasági ismereteit</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'261\',
            \'uid\' => \'3\',
            \'filename\' => \'vt.jpg\',
            \'uri\' => \'public://vt.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30061\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676448\',
            \'type\' => \'image\',
            \'uuid\' => \'1f3714d5-2e79-4409-85db-ebb7736c276e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'175\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'175\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010 – 2012: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalati Pénzügyi Menedzsment szakirány&nbsp;<br />\\r\\n2007 – 2010: BBTE KGTK, alapképzés, magyar tagozat, Menedzsment szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010 – 2012: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalati Pénzügyi Menedzsment szakirány <br />\\n2007 – 2010: BBTE KGTK, alapképzés, magyar tagozat, Menedzsment szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Vincze Tamás\',
            \'format\' => NULL,
            \'safe_value\' => \'Vincze Tamás\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
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
      \'last_comment_timestamp\' => \'1423230577\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1144\',
        \'source\' => \'node/1133\',
        \'alias\' => \'vincze-tamás\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'983\',
      \'uid\' => \'3\',
      \'title\' => \'Radics László\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'58ea02c7-f621-4302-8d6f-1412d6dfffec\',
      \'nid\' => \'983\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226559\',
      \'changed\' => \'1423226559\',
      \'tnid\' => \'698\',
      \'translate\' => \'0\',
      \'uuid\' => \'40d20258-eb95-4c2b-adc6-b0112f6be206\',
      \'revision_timestamp\' => \'1423226559\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>scientific collaboratort of the Budapest Business School, and the founder and current leader of SmartLab Consulting Ltd. from Budapest</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>scientific collaboratort of the Budapest Business School, and the founder and current leader of SmartLab Consulting Ltd. from Budapest</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'558\',
            \'uid\' => \'3\',
            \'filename\' => \'radacsi_laszlo Cropped Cropped.jpg\',
            \'uri\' => \'public://radacsi_laszlo Cropped Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'26759\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852849\',
            \'type\' => \'image\',
            \'uuid\' => \'3331cf9b-fd47-4b17-bb5f-6c960d85d9d4\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Radics László\',
            \'format\' => NULL,
            \'safe_value\' => \'Radics László\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Radics László\',
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
      \'last_comment_timestamp\' => \'1423226559\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'994\',
        \'source\' => \'node/983\',
        \'alias\' => \'radics-lászló\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'994\',
      \'uid\' => \'3\',
      \'title\' => \'Tombor András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bf92e618-dc8a-4e8b-b6a7-fa5b41082186\',
      \'nid\' => \'994\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226914\',
      \'changed\' => \'1423226914\',
      \'tnid\' => \'703\',
      \'translate\' => \'0\',
      \'uuid\' => \'40f4f67d-3743-498f-b536-caf5b9edcf3b\',
      \'revision_timestamp\' => \'1423226914\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>fondatorul şi preşedintele Mathias Corvinus Collegium</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>fondatorul şi preşedintele Mathias Corvinus Collegium</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'567\',
            \'uid\' => \'3\',
            \'filename\' => \'tombor-andrás-kiemelt Cropped.jpg\',
            \'uri\' => \'public://tombor-andrás-kiemelt Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25391\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853749\',
            \'type\' => \'image\',
            \'uuid\' => \'768a3d12-881d-4f19-95c6-db94ede8c6b9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Tombor András\',
            \'format\' => NULL,
            \'safe_value\' => \'Tombor András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Tombor András\',
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
      \'last_comment_timestamp\' => \'1423226914\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1005\',
        \'source\' => \'node/994\',
        \'alias\' => \'tombor-andrás\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'695\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Bálint\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'26212eb5-4541-4730-b42c-237a6dd57626\',
      \'nid\' => \'695\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421677846\',
      \'changed\' => \'1422710610\',
      \'tnid\' => \'695\',
      \'translate\' => \'0\',
      \'uuid\' => \'415839da-c695-4be4-86b6-0cd3616c74b3\',
      \'revision_timestamp\' => \'1422710610\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>adjunktus, BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>adjunktus, BBTE</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'548\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy Balint Cropped.jpg\',
            \'uri\' => \'public://Nagy Balint Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30199\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852476\',
            \'type\' => \'image\',
            \'uuid\' => \'0353aa5c-b487-42ee-b4ca-24dc5d5c38bd\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy Bálint\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Bálint\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Nagy Bálint\',
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
      \'last_comment_timestamp\' => \'1421677846\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'705\',
        \'source\' => \'node/695\',
        \'alias\' => \'nagy-bálint\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1124\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fbd0b120-3858-4714-8b01-6399eb54819e\',
      \'nid\' => \'1124\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230523\',
      \'changed\' => \'1423230523\',
      \'tnid\' => \'658\',
      \'translate\' => \'0\',
      \'uuid\' => \'419a1ee2-af2b-4c41-8555-e253bd40b0d0\',
      \'revision_timestamp\' => \'1423230523\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>CEO Viasat Hungaria Zrt, MTG Hungary</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>CEO Viasat Hungaria Zrt, MTG Hungary</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Esettanulmányos múltamnak nagyon sok mindent köszönhetek, egy kitörési- és referenciaponttá vált az életemben. GTK-nak küldetésesnek azon része, amely valami <u>másra </u>kíváncsi diákoknak valami <u>más gyakorlati tapasztalatot </u>kínál egy rendkívülien fontos és hasznos érték.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Esettanulmányos múltamnak nagyon sok mindent köszönhetek, egy kitörési- és referenciaponttá vált az életemben. GTK-nak küldetésesnek azon része, amely valami <u>másra </u>kíváncsi diákoknak valami <u>más gyakorlati tapasztalatot </u>kínál egy rendkívülien fontos és hasznos érték.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'539\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo_andris Cropped.jpg\',
            \'uri\' => \'public://szabo_andris Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25579\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421850566\',
            \'type\' => \'image\',
            \'uuid\' => \'33a0bea2-28ee-4142-a02b-18cab4a4fb50\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>TBBTE KGTK, egyetemi képzés, magyar tagozat,&nbsp;Bank és Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>TBBTE KGTK, egyetemi képzés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Szabó András\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2004\',
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
      \'last_comment_timestamp\' => \'1423230523\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1135\',
        \'source\' => \'node/1124\',
        \'alias\' => \'szabó-andrás-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1188\',
      \'uid\' => \'3\',
      \'title\' => \'2007-2008 tevékenységi beszámoló\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'312306a4-2c70-4851-b6f7-a2c2389653d5\',
      \'nid\' => \'1188\',
      \'type\' => \'result\',
      \'language\' => \'hu\',
      \'created\' => \'1424173531\',
      \'changed\' => \'1424263512\',
      \'tnid\' => \'1188\',
      \'translate\' => \'0\',
      \'uuid\' => \'42af00fa-7717-4be0-b135-795c3ea4dd49\',
      \'revision_timestamp\' => \'1424263512\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2007-2008-as tanév az alakulás éve, a csapat összehangolásáról és a programok, mit a shadowing is, megerősítéséről szólt. Mindezek mellett a tagok kitünően teljesítettek a versenyeken.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2007-2008-as tanév az alakulás éve, a csapat összehangolásáról és a programok, mit a shadowing is, megerősítéséről szólt. Mindezek mellett a tagok kitünően teljesítettek a versenyeken. </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>VI. Országos Pénzügyi Esettanulmány Versenyen (OPEV), Győr:</strong></p>\\r\\n\\r\\n<p>Ferencz Katalin,&nbsp;Szakács Szilárd,&nbsp;Szász Levente -&nbsp;<strong>II. hely</strong></p>\\r\\n\\r\\n<p><strong>IX. Országos Esettanulmány Versenyen (OEV):</strong></p>\\r\\n\\r\\n<p>Ferencz Katalin,&nbsp;Szakács Szilárd,&nbsp;Szász Levente -&nbsp;<strong>részvétel</strong></p>\\r\\n\\r\\n<p><strong>Global Management Challenge (GMC) 2008.:</strong></p>\\r\\n\\r\\n<p>Ferencz Katalin,&nbsp;Szakács Szilárd,&nbsp;Szász Levente,&nbsp;László Tímea - a versenyen, Romániában induló 64 db. négyfős csapat közül a BBTE hallgatóiból álló csapat az első 16 közé jutott</p>\\r\\n\\r\\n<p><strong>BBTE KGTK-n szervezett Román Nyelvű Kari Esettanulmány Verseny:</strong></p>\\r\\n\\r\\n<p>Barok István,&nbsp;Birton Réka,&nbsp;Lőrincz Márta,&nbsp;Vincze Tamás - <strong>I. hely</strong></p>\\r\\n\\r\\n<p><strong>XVI. Országos Menedzsment Esettanulmány Versenyen (OMEV). Kolozsvár:</strong></p>\\r\\n\\r\\n<p>Szakács Szilárd&nbsp;- <strong>I. hely</strong></p>\\r\\n\\r\\n<p>Laczkó Dénes -&nbsp;<strong>dicséret</strong></p>\\r\\n\\r\\n<p>Barok István,&nbsp;Birton Réka,&nbsp;Lőrincz Márta&nbsp;és&nbsp;Vincze Tamás - <strong>részvétel</strong></p>\\r\\n\\r\\n<p><strong>VII. Csíkszeredai Nyílt Esettanulmány Versenyen:</strong></p>\\r\\n\\r\\n<p>Barok István,&nbsp;Lőrincz Márta - <strong>részvétel</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>VI. Országos Pénzügyi Esettanulmány Versenyen (OPEV), Győr:</strong></p>\\n<p>Ferencz Katalin, Szakács Szilárd, Szász Levente - <strong>II. hely</strong></p>\\n<p><strong>IX. Országos Esettanulmány Versenyen (OEV):</strong></p>\\n<p>Ferencz Katalin, Szakács Szilárd, Szász Levente - <strong>részvétel</strong></p>\\n<p><strong>Global Management Challenge (GMC) 2008.:</strong></p>\\n<p>Ferencz Katalin, Szakács Szilárd, Szász Levente, László Tímea - a versenyen, Romániában induló 64 db. négyfős csapat közül a BBTE hallgatóiból álló csapat az első 16 közé jutott</p>\\n<p><strong>BBTE KGTK-n szervezett Román Nyelvű Kari Esettanulmány Verseny:</strong></p>\\n<p>Barok István, Birton Réka, Lőrincz Márta, Vincze Tamás - <strong>I. hely</strong></p>\\n<p><strong>XVI. Országos Menedzsment Esettanulmány Versenyen (OMEV). Kolozsvár:</strong></p>\\n<p>Szakács Szilárd - <strong>I. hely</strong></p>\\n<p>Laczkó Dénes - <strong>dicséret</strong></p>\\n<p>Barok István, Birton Réka, Lőrincz Márta és Vincze Tamás - <strong>részvétel</strong></p>\\n<p><strong>VII. Csíkszeredai Nyílt Esettanulmány Versenyen:</strong></p>\\n<p>Barok István, Lőrincz Márta - <strong>részvétel</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Publikációk:</p>\\r\\n\\r\\n<p>Bálint Tamás,&nbsp;Lőrinczi Attila: 1 db. megjelent CNCSIS B+ cikk, három társszerzős (a harmadik szerző nem szakköri szenior vagy rendes tag), Közgazdász Fórum, 2007/11.</p>\\r\\n\\r\\n<p>Szakács Szilárd: 1 db. megjelent CNCSIS B+ cikk, három társszerzős (a társszerzők nem szakköri szenior vagy rendes tagok), Közgazdász Fórum, 2008/06.</p>\\r\\n\\r\\n<p>Szász Levente: 3 db. megjelent CNCSIS B+ cikk, melyből 1 két társszerzős, Közgazdász Fórum, 2008/05, 2008/06, 2008/08.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Publikációk:</p>\\n<p>Bálint Tamás, Lőrinczi Attila: 1 db. megjelent CNCSIS B+ cikk, három társszerzős (a harmadik szerző nem szakköri szenior vagy rendes tag), Közgazdász Fórum, 2007/11.</p>\\n<p>Szakács Szilárd: 1 db. megjelent CNCSIS B+ cikk, három társszerzős (a társszerzők nem szakköri szenior vagy rendes tagok), Közgazdász Fórum, 2008/06.</p>\\n<p>Szász Levente: 3 db. megjelent CNCSIS B+ cikk, melyből 1 két társszerzős, Közgazdász Fórum, 2008/05, 2008/06, 2008/08.</p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1424173531\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1199\',
        \'source\' => \'node/1188\',
        \'alias\' => \'2007-2008-tevékenységi-beszámoló\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'903\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó S. Zsolt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'37ae0656-0382-4cf9-b4be-649acaf84afd\',
      \'nid\' => \'903\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421829238\',
      \'changed\' => \'1421848087\',
      \'tnid\' => \'903\',
      \'translate\' => \'0\',
      \'uuid\' => \'46541129-f13d-4a96-a4ad-14b26d69ba72\',
      \'revision_timestamp\' => \'1421848087\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'525\',
            \'uid\' => \'3\',
            \'filename\' => \'szabó_zsolt Cropped.jpg\',
            \'uri\' => \'public://szabó_zsolt Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'16642\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848087\',
            \'type\' => \'image\',
            \'uuid\' => \'b328c9b8-b0fa-4a20-96bb-5156bc4883c9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szabó S. Zsolt\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó S. Zsolt\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1421829238\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'914\',
        \'source\' => \'node/903\',
        \'alias\' => \'szabó-s-zsolt\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'699\',
      \'uid\' => \'3\',
      \'title\' => \'Răzvan Mustață\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'95ef1d0b-958c-4a79-a10d-4e8225bebbf5\',
      \'nid\' => \'699\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421678035\',
      \'changed\' => \'1422710659\',
      \'tnid\' => \'699\',
      \'translate\' => \'0\',
      \'uuid\' => \'4b40c0f5-ec5d-460b-bc0e-dccd30818c86\',
      \'revision_timestamp\' => \'1422710659\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>a BBTE Közgazdaság- és Gazdálkodástudományi Kar dékánhelyettese</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>a BBTE Közgazdaság- és Gazdálkodástudományi Kar dékánhelyettese</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'549\',
            \'uid\' => \'3\',
            \'filename\' => \'razvan_mustata Cropped.jpg\',
            \'uri\' => \'public://razvan_mustata Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'35032\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852501\',
            \'type\' => \'image\',
            \'uuid\' => \'063ef6f9-6e7d-4ac1-b49b-a6871682990b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Răzvan Mustață\',
            \'format\' => NULL,
            \'safe_value\' => \'Răzvan Mustață\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Răzvan Mustață\',
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
      \'last_comment_timestamp\' => \'1421678035\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'709\',
        \'source\' => \'node/699\',
        \'alias\' => \'răzvan-mustață\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1158\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Linda\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'365187cc-8d57-4db3-999a-b90cc07e9960\',
      \'nid\' => \'1158\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423231030\',
      \'changed\' => \'1423231030\',
      \'tnid\' => \'722\',
      \'translate\' => \'0\',
      \'uuid\' => \'4b59feaa-4e13-46c6-b0d8-6384aef1e161\',
      \'revision_timestamp\' => \'1423231030\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Highschool alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Highschool alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'584\',
            \'uid\' => \'3\',
            \'filename\' => \'SzekelyL Cropped.jpg\',
            \'uri\' => \'public://SzekelyL Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31919\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855492\',
            \'type\' => \'image\',
            \'uuid\' => \'d7149b07-78d3-4e9e-8a28-a6fa689a4e0e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Székely Linda\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Linda\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Székely Linda\',
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
      \'last_comment_timestamp\' => \'1423231030\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1169\',
        \'source\' => \'node/1158\',
        \'alias\' => \'székely-linda\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1059\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Rita\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eefced21-8322-4eb5-a106-b7845c37a07e\',
      \'nid\' => \'1059\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423229791\',
      \'changed\' => \'1423229791\',
      \'tnid\' => \'904\',
      \'translate\' => \'0\',
      \'uuid\' => \'4f2bab7a-0508-45ef-9d20-fce818467a5a\',
      \'revision_timestamp\' => \'1423229791\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'526\',
            \'uid\' => \'3\',
            \'filename\' => \'SzékelyRita Cropped.jpg\',
            \'uri\' => \'public://SzékelyRita Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'44330\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848090\',
            \'type\' => \'image\',
            \'uuid\' => \'372fce4b-ee57-4bba-aded-ffc4404f688b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Székely Rita\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Rita\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Székely Rita\',
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
      \'last_comment_timestamp\' => \'1423229791\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1070\',
        \'source\' => \'node/1059\',
        \'alias\' => \'székely-rita\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'986\',
      \'uid\' => \'3\',
      \'title\' => \'Rodney Baker\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'64cb84f3-cd0a-4bc3-bd9c-959392f35dac\',
      \'nid\' => \'986\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226673\',
      \'changed\' => \'1423226673\',
      \'tnid\' => \'700\',
      \'translate\' => \'0\',
      \'uuid\' => \'4fb05fd6-e0af-44f6-9c60-ecdfe676340e\',
      \'revision_timestamp\' => \'1423226673\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>profesor la London School of Economics</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>profesor la London School of Economics</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'299\',
            \'uid\' => \'3\',
            \'filename\' => \'rodney.jpg\',
            \'uri\' => \'public://rodney.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'45757\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421678161\',
            \'type\' => \'image\',
            \'uuid\' => \'d5bd5aeb-77f0-4365-801a-7d4a9643eda4\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'210\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'210\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Rodney Baker\',
            \'format\' => NULL,
            \'safe_value\' => \'Rodney Baker\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Rodney Baker\',
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
      \'last_comment_timestamp\' => \'1423226673\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'997\',
        \'source\' => \'node/986\',
        \'alias\' => \'rodney-baker\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'701\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'630af274-5a0c-429b-bd91-39f753ffc870\',
      \'nid\' => \'701\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421678210\',
      \'changed\' => \'1421853632\',
      \'tnid\' => \'701\',
      \'translate\' => \'0\',
      \'uuid\' => \'5127bb33-727d-43f8-9383-897235a8f8b2\',
      \'revision_timestamp\' => \'1421853632\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>CEO Viasat Hungaria Zrt, MTG Hungary</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>CEO Viasat Hungaria Zrt, MTG Hungary</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'564\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo_andris Cropped.jpg\',
            \'uri\' => \'public://szabo_andris Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25579\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853632\',
            \'type\' => \'image\',
            \'uuid\' => \'868124a7-8249-4103-8bc7-3d8603b95888\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szabó András\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
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
      \'last_comment_timestamp\' => \'1421678210\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'711\',
        \'source\' => \'node/701\',
        \'alias\' => \'szabó-andrás-0\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1165\',
      \'uid\' => \'3\',
      \'title\' => \'Tóth Klára\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'14906f4f-6d5d-4d3c-8831-b0219c7d5f2b\',
      \'nid\' => \'1165\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423231080\',
      \'changed\' => \'1423231080\',
      \'tnid\' => \'724\',
      \'translate\' => \'0\',
      \'uuid\' => \'52c302f2-e4a6-4c6f-9d5a-9f38fe703c88\',
      \'revision_timestamp\' => \'1423231080\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni - Program pentru Liceeni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni - Program pentru Liceeni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'586\',
            \'uid\' => \'3\',
            \'filename\' => \'Toth_Klári Cropped.jpg\',
            \'uri\' => \'public://Toth_Klári Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31457\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855548\',
            \'type\' => \'image\',
            \'uuid\' => \'dffa683b-0288-4570-ae23-280670f8eeb9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'266\',
              \'height\' => \'266\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'266\',
            \'height\' => \'266\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Tóth Klára\',
            \'format\' => NULL,
            \'safe_value\' => \'Tóth Klára\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Tóth Klára\',
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
      \'last_comment_timestamp\' => \'1423231080\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1176\',
        \'source\' => \'node/1165\',
        \'alias\' => \'tóth-klára\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1176\',
      \'uid\' => \'3\',
      \'title\' => \'2012-2013 \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'624e862a-63c0-467f-9521-748c4f67b7f5\',
      \'nid\' => \'1176\',
      \'type\' => \'result\',
      \'language\' => \'en\',
      \'created\' => \'1423482450\',
      \'changed\' => \'1424260328\',
      \'tnid\' => \'728\',
      \'translate\' => \'0\',
      \'uuid\' => \'543ae9f1-a805-486e-b3ad-bf0690f599e5\',
      \'revision_timestamp\' => \'1424260328\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">In the 2012/2013 academic year members participated at 11 case study competitions, won 9 prices, at the OTDK and ETDK conferences. In this year the new program was the Leadership trainig program organized together with MCC.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">In the 2012/2013 academic year members participated at 11 case study competitions, won 9 prices, at the OTDK and ETDK conferences. In this year the new program was the Leadership trainig program organized together with MCC.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>V. “Dr. Papp László” Case Study Competition in Accounting, Pécs:</strong><br />\\r\\nÁbrahám Krisztina - <strong>I. price</strong><br />\\r\\nBaumgartner Mónika (alumni), Demeter Zselyke, Erdély Attila (alumni) -<em>&nbsp;</em><strong>III. price</strong><br />\\r\\nDorner Boglárka (alumni), Furdek Balázs, Salamon Ádám, Szőcs Kinga&nbsp;Beáta (alumni) - <strong>Semifinal Group II. price</strong></p>\\r\\n\\r\\n<p><strong>ESET\'12 Case Study Competition, Budapest:</strong><br />\\r\\nÁbrahám Krisztina, Erdély Attila (alumni), Szőcs Kinga Beáta (alumni)</p>\\r\\n\\r\\n<p><strong>European Case Study Competition for Consulting Clubs, Budapest:</strong><br />\\r\\nÁbrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga&nbsp;Beáta (alumni) – <strong>I. price</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong>XI. National Finance Case Study Competition, Győr:</strong><br />\\r\\nBaumgartner Mónika (alumni), Erdély Attila (alumni),&nbsp;Salamon Ádám - <strong>I. price</strong></p>\\r\\n\\r\\n<p><strong>XII. „Tímár László” Case Study Competition, Veszprém:</strong><br />\\r\\nÁbrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Rákóczi Roland - <strong>I. price</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong>XIV. National Case Study Competition, Budapest:</strong><br />\\r\\nÁbrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga&nbsp;</p>\\r\\n\\r\\n<p><strong>Cluj-Napoca Case Study Competition 2013, Cluj Napoca:</strong><br />\\r\\nÁbrán Csilla-Hajnalka, Kiss Alpár, Német Hunor -<em> </em><strong>I. price</strong><br />\\r\\nÁbrahám Krisztina, Benkő Zsolt, Demeter Zselyke,&nbsp;Major Tamás (alumni) - <strong>II. price</strong><br />\\r\\nCzirják Renáta Hajnalka, Dombi Tünde,&nbsp;Guttmann Csongor, Kovács Anita - <strong>III. price</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong>Freshhh2013 international competition:</strong><br />\\r\\nFurdek Balázs, Rákóczi Roland, Salamon Ádám - <strong>III. price&nbsp;</strong></p>\\r\\n\\r\\n<p><strong>12th Open Case Study Competition in Miercurea Ciuc, Miercurea Ciuc:</strong><br />\\r\\nÁbrán Csilla-Hajnalka, Czirják Renáta Hajnalka, Dombi Tünde, Guttmann&nbsp;Csongor, Kiss Alpár, Német Hunor, Kovács Anita, Székely Rita&nbsp;</p>\\r\\n\\r\\n<p><strong>4th Communication and Marketing Case Study Competition, Oradea:</strong><br />\\r\\nDemeter Zselyke -<em> </em><strong>I. price</strong></p>\\r\\n\\r\\n<p><strong>II. Accounting and Finance Case Study Competition, Budapest:</strong><br />\\r\\nBaumgartner Mónika (alumni), Benkő Zsolt, Erdély Attila (alumni)</p>\\r\\n\\r\\n<p><strong>K&amp;H Student Cup 2012 competition:</strong><br />\\r\\nSzőcs Kinga Beata (alumni), Rákóczi&nbsp;Roland</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>V. “Dr. Papp László” Case Study Competition in Accounting, Pécs:</strong><br />\\nÁbrahám Krisztina - <strong>I. price</strong><br />\\nBaumgartner Mónika (alumni), Demeter Zselyke, Erdély Attila (alumni) -<em> </em><strong>III. price</strong><br />\\nDorner Boglárka (alumni), Furdek Balázs, Salamon Ádám, Szőcs Kinga Beáta (alumni) - <strong>Semifinal Group II. price</strong></p>\\n<p><strong>ESET\'12 Case Study Competition, Budapest:</strong><br />\\nÁbrahám Krisztina, Erdély Attila (alumni), Szőcs Kinga Beáta (alumni)</p>\\n<p><strong>European Case Study Competition for Consulting Clubs, Budapest:</strong><br />\\nÁbrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni) – <strong>I. price</strong> </p>\\n<p><strong>XI. National Finance Case Study Competition, Győr:</strong><br />\\nBaumgartner Mónika (alumni), Erdély Attila (alumni), Salamon Ádám - <strong>I. price</strong></p>\\n<p><strong>XII. „Tímár László” Case Study Competition, Veszprém:</strong><br />\\nÁbrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Rákóczi Roland - <strong>I. price</strong> </p>\\n<p><strong>XIV. National Case Study Competition, Budapest:</strong><br />\\nÁbrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga </p>\\n<p><strong>Cluj-Napoca Case Study Competition 2013, Cluj Napoca:</strong><br />\\nÁbrán Csilla-Hajnalka, Kiss Alpár, Német Hunor -<em> </em><strong>I. price</strong><br />\\nÁbrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Major Tamás (alumni) - <strong>II. price</strong><br />\\nCzirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kovács Anita - <strong>III. price</strong> </p>\\n<p><strong>Freshhh2013 international competition:</strong><br />\\nFurdek Balázs, Rákóczi Roland, Salamon Ádám - <strong>III. price </strong></p>\\n<p><strong>12th Open Case Study Competition in Miercurea Ciuc, Miercurea Ciuc:</strong><br />\\nÁbrán Csilla-Hajnalka, Czirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kiss Alpár, Német Hunor, Kovács Anita, Székely Rita </p>\\n<p><strong>4th Communication and Marketing Case Study Competition, Oradea:</strong><br />\\nDemeter Zselyke -<em> </em><strong>I. price</strong></p>\\n<p><strong>II. Accounting and Finance Case Study Competition, Budapest:</strong><br />\\nBaumgartner Mónika (alumni), Benkő Zsolt, Erdély Attila (alumni)</p>\\n<p><strong>K&amp;H Student Cup 2012 competition:</strong><br />\\nSzőcs Kinga Beata (alumni), Rákóczi Roland</p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Management section - First place:</strong><br />\\r\\nDemeter Zselyke&nbsp;<br />\\r\\nErdély Attila&nbsp;</p>\\r\\n\\r\\n<p><strong>Management section - Second place:</strong><br />\\r\\nÁbrahám Krisztina, Kiss Alpár, Német Hunor Attila</p>\\r\\n\\r\\n<p><strong>Management section - Third place:</strong><br />\\r\\nÁbrahám Krisztina, Czirják Renáta Hajnalka, Guttmann Csongor, Kovács Anita &nbsp;</p>\\r\\n\\r\\n<p><strong>Management section - Diploma of Mention:</strong><br />\\r\\nÁbrán Csilla-Hajnalka, Dombi Tünde</p>\\r\\n\\r\\n<p><strong>Finance section First place:</strong><br />\\r\\nSalamon Ádám</p>\\r\\n\\r\\n<p><strong>Finance section - Second place:</strong><br />\\r\\nRákóczi Roland&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Management section - First place:</strong><br />\\nDemeter Zselyke <br />\\nErdély Attila </p>\\n<p><strong>Management section - Second place:</strong><br />\\nÁbrahám Krisztina, Kiss Alpár, Német Hunor Attila</p>\\n<p><strong>Management section - Third place:</strong><br />\\nÁbrahám Krisztina, Czirják Renáta Hajnalka, Guttmann Csongor, Kovács Anita  </p>\\n<p><strong>Management section - Diploma of Mention:</strong><br />\\nÁbrán Csilla-Hajnalka, Dombi Tünde</p>\\n<p><strong>Finance section First place:</strong><br />\\nSalamon Ádám</p>\\n<p><strong>Finance section - Second place:</strong><br />\\nRákóczi Roland </p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Botond Bilib</strong><strong>ó</strong><strong>k, </strong>CEO of the Concorde Asset Management</p>\\r\\n\\r\\n<p><strong>dr. David Sims, </strong>professor at the City University London – Cass&nbsp;Business School</p>\\r\\n\\r\\n<p><strong>E</strong><strong>ö</strong><strong>rs Huba, </strong>managing partner of IFUA Horváth &amp; Partners</p>\\r\\n\\r\\n<p><strong>Mih</strong><strong>á</strong><strong>ly Lieb, </strong>owner of Autonet Group</p>\\r\\n\\r\\n<p><strong>Levente Szab</strong><strong>ó</strong><strong>, </strong>CEO of the Takarékbank Zrt.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Botond Bilib</strong><strong>ó</strong><strong>k, </strong>CEO of the Concorde Asset Management</p>\\n<p><strong>dr. David Sims, </strong>professor at the City University London – Cass Business School</p>\\n<p><strong>E</strong><strong>ö</strong><strong>rs Huba, </strong>managing partner of IFUA Horváth &amp; Partners</p>\\n<p><strong>Mih</strong><strong>á</strong><strong>ly Lieb, </strong>owner of Autonet Group</p>\\n<p><strong>Levente Szab</strong><strong>ó</strong><strong>, </strong>CEO of the Takarékbank Zrt.</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>9. Central European Conference:&nbsp;Krisztina Ábrahám (2013)</strong>&nbsp;<em>„SME\'s in Central Europe”&nbsp;section</em></p>\\r\\n\\r\\n<p><strong>6th International Management Conference Managerial&nbsp;Challenges of the Contemporary Society: Levente Szász,&nbsp;Zselyke Demeter (2013)</strong><em>:</em> <em>Improving operations based on&nbsp;competitive priority mapping: a case study in the plasticsindustry</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>9. Central European Conference: Krisztina Ábrahám (2013)</strong> <em>„SME\'s in Central Europe” section</em></p>\\n<p><strong>6th International Management Conference Managerial Challenges of the Contemporary Society: Levente Szász, Zselyke Demeter (2013)</strong><em>:</em> <em>Improving operations based on competitive priority mapping: a case study in the plasticsindustry</em></p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Ábrán Csilla és Dombi Tünde @ Tipo Holding<br />\\r\\nSzékely Rita és Czirják Renáta @ MarsoRom<br />\\r\\nKovács Anita és Német Hunor @ Romchemicals<br />\\r\\nGuttmann Csongor és Kiss Alpár @ East Consulting</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ábrán Csilla és Dombi Tünde @ Tipo Holding<br />\\nSzékely Rita és Czirják Renáta @ MarsoRom<br />\\nKovács Anita és Német Hunor @ Romchemicals<br />\\nGuttmann Csongor és Kiss Alpár @ East Consulting</p>\\n",
          ),
        ),
      ),
      \'field_otdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Business Economics Section:&nbsp;</strong>Major Tamás (alumni), <strong>I. price</strong></p>\\r\\n\\r\\n<p><strong>Section of Corporate Finance:&nbsp;</strong>Dorner Boglárka (alumni), <strong>III. price</strong></p>\\r\\n\\r\\n<p><strong>Strategic and change management session:</strong><em>&nbsp;</em>Erdély Attila (alumni), <strong>special price</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Business Economics Section: </strong>Major Tamás (alumni), <strong>I. price</strong></p>\\n<p><strong>Section of Corporate Finance: </strong>Dorner Boglárka (alumni), <strong>III. price</strong></p>\\n<p><strong>Strategic and change management session:</strong><em> </em>Erdély Attila (alumni), <strong>special price</strong></p>\\n",
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
      \'last_comment_timestamp\' => \'1423482450\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1187\',
        \'source\' => \'node/1176\',
        \'alias\' => \'2012-2013\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'988\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fbcc9c31-dd4b-4139-93bd-b680a6e17684\',
      \'nid\' => \'988\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226750\',
      \'changed\' => \'1423226750\',
      \'tnid\' => \'701\',
      \'translate\' => \'0\',
      \'uuid\' => \'55e54d19-ff87-43fd-b9ad-4d9e1b3f0c45\',
      \'revision_timestamp\' => \'1423226750\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>CEO of Viasat Hungária Zrt.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>CEO of Viasat Hungária Zrt.</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'564\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo_andris Cropped.jpg\',
            \'uri\' => \'public://szabo_andris Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25579\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853632\',
            \'type\' => \'image\',
            \'uuid\' => \'868124a7-8249-4103-8bc7-3d8603b95888\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Szabó András\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
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
      \'last_comment_timestamp\' => \'1423226750\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'999\',
        \'source\' => \'node/988\',
        \'alias\' => \'szabó-andrás\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'999\',
      \'uid\' => \'3\',
      \'title\' => \'Záboji Péter\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'60b37d3b-0da0-4f8a-ab4d-05d7bb64d01a\',
      \'nid\' => \'999\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423227353\',
      \'changed\' => \'1423227353\',
      \'tnid\' => \'697\',
      \'translate\' => \'0\',
      \'uuid\' => \'56a4a2b2-f66e-4b02-bb61-78d814656b64\',
      \'revision_timestamp\' => \'1423227353\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>president, European Entrepreneurship Foundation</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>president, European Entrepreneurship Foundation</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'569\',
            \'uid\' => \'3\',
            \'filename\' => \'Peter B Zaboji  Cropped.jpg\',
            \'uri\' => \'public://Peter B Zaboji  Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30452\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853780\',
            \'type\' => \'image\',
            \'uuid\' => \'00859df5-41bc-41dd-89ef-0f9be693e683\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Záboji Péter\',
            \'format\' => NULL,
            \'safe_value\' => \'Záboji Péter\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Záboji Péter\',
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
      \'last_comment_timestamp\' => \'1423227353\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1010\',
        \'source\' => \'node/999\',
        \'alias\' => \'záboji-péter\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1000\',
      \'uid\' => \'3\',
      \'title\' => \'Zala Ákos\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b946492a-f5d3-4e35-9d8e-80d165fd65e1\',
      \'nid\' => \'1000\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423227378\',
      \'changed\' => \'1423227378\',
      \'tnid\' => \'705\',
      \'translate\' => \'0\',
      \'uuid\' => \'5712e981-ef91-43a5-8543-9df4ba60a668\',
      \'revision_timestamp\' => \'1423227378\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>managing director, Human Telex Consulting</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>managing director, Human Telex Consulting</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'566\',
            \'uid\' => \'3\',
            \'filename\' => \'zala_akos Cropped.jpg\',
            \'uri\' => \'public://zala_akos Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'19087\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853729\',
            \'type\' => \'image\',
            \'uuid\' => \'fa441c43-392e-47ba-a92e-c268653e11b8\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Zala Ákos\',
            \'format\' => NULL,
            \'safe_value\' => \'Zala Ákos\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Zala Ákos\',
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
      \'last_comment_timestamp\' => \'1423227378\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1011\',
        \'source\' => \'node/1000\',
        \'alias\' => \'zala-ákos\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'974\',
      \'uid\' => \'3\',
      \'title\' => \'Mészáros Csaba\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6484eef4-f3c6-4544-bab5-c313be0c57bb\',
      \'nid\' => \'974\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226317\',
      \'changed\' => \'1423226317\',
      \'tnid\' => \'692\',
      \'translate\' => \'0\',
      \'uuid\' => \'5d029878-200d-43b6-bbb6-9ef05285dbb9\',
      \'revision_timestamp\' => \'1423226317\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>owner, Evopro</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>owner, Evopro</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'555\',
            \'uid\' => \'3\',
            \'filename\' => \'MeszarosCsaba Cropped.jpg\',
            \'uri\' => \'public://MeszarosCsaba Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'29398\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852649\',
            \'type\' => \'image\',
            \'uuid\' => \'ee0b2afe-28ae-4cfe-8764-66de60958267\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Mészáros Csaba\',
            \'format\' => NULL,
            \'safe_value\' => \'Mészáros Csaba\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Mészáros Csaba\',
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
      \'last_comment_timestamp\' => \'1423226317\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'985\',
        \'source\' => \'node/974\',
        \'alias\' => \'mészáros-csaba\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'909\',
      \'uid\' => \'3\',
      \'title\' => \'Török Léna\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'42009858-b2f7-40d4-8ded-69738f501a8f\',
      \'nid\' => \'909\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421854007\',
      \'changed\' => \'1421854007\',
      \'tnid\' => \'909\',
      \'translate\' => \'0\',
      \'uuid\' => \'5dec451b-1e16-4960-b3de-9f2bd68eaaeb\',
      \'revision_timestamp\' => \'1421854007\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Középiskolás Program Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Középiskolás Program Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'570\',
            \'uid\' => \'3\',
            \'filename\' => \'törökléna Cropped.jpg\',
            \'uri\' => \'public://törökléna Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25084\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421854007\',
            \'type\' => \'image\',
            \'uuid\' => \'53dca2a3-9d1e-49de-9c74-4394160a47a2\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Török Léna\',
            \'format\' => NULL,
            \'safe_value\' => \'Török Léna\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Török Léna\',
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
      \'last_comment_timestamp\' => \'1421854007\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'920\',
        \'source\' => \'node/909\',
        \'alias\' => \'török-léna\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'692\',
      \'uid\' => \'3\',
      \'title\' => \'Mészáros Csaba\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eaa55713-0fff-45c2-b2ec-2093c8af841e\',
      \'nid\' => \'692\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421677740\',
      \'changed\' => \'1421852649\',
      \'tnid\' => \'692\',
      \'translate\' => \'0\',
      \'uuid\' => \'61e22162-8b51-41a9-999c-5aafec6cc5c7\',
      \'revision_timestamp\' => \'1421852649\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>tulajdonos, Evopro</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>tulajdonos, Evopro</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'555\',
            \'uid\' => \'3\',
            \'filename\' => \'MeszarosCsaba Cropped.jpg\',
            \'uri\' => \'public://MeszarosCsaba Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'29398\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852649\',
            \'type\' => \'image\',
            \'uuid\' => \'ee0b2afe-28ae-4cfe-8764-66de60958267\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Mészáros Csaba\',
            \'format\' => NULL,
            \'safe_value\' => \'Mészáros Csaba\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Mészáros Csaba\',
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
      \'last_comment_timestamp\' => \'1421677740\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'702\',
        \'source\' => \'node/692\',
        \'alias\' => \'mészáros-csaba\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'704\',
      \'uid\' => \'3\',
      \'title\' => \'Viszkievicz András \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c21598ab-14b3-46ec-af65-e3bf105221d5\',
      \'nid\' => \'704\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421678301\',
      \'changed\' => \'1423227234\',
      \'tnid\' => \'704\',
      \'translate\' => \'0\',
      \'uuid\' => \'6698c62e-7318-4c93-aa97-d87aba0f5fd2\',
      \'revision_timestamp\' => \'1423227234\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>az Aegon Biztosító biztosítási elemzője</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>az Aegon Biztosító biztosítási elemzője</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1005\',
            \'uid\' => \'3\',
            \'filename\' => \'viszkievicz Cropped.jpg\',
            \'uri\' => \'public://viszkievicz Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22572\',
            \'status\' => \'1\',
            \'timestamp\' => \'1423227234\',
            \'type\' => \'image\',
            \'uuid\' => \'0504f29c-11d3-4187-ac88-0741b20278e7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Viszkievicz András \',
            \'format\' => NULL,
            \'safe_value\' => \'Viszkievicz András \',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Viszkievicz András \',
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
      \'last_comment_timestamp\' => \'1421678301\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'714\',
        \'source\' => \'node/704\',
        \'alias\' => \'viszkievicz-andrás\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1122\',
      \'uid\' => \'3\',
      \'title\' => \'Rákoczi Roland\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'357586c0-ef57-436d-b95e-1c136b47a5e8\',
      \'nid\' => \'1122\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230484\',
      \'changed\' => \'1423230484\',
      \'tnid\' => \'655\',
      \'translate\' => \'0\',
      \'uuid\' => \'67826b38-9226-40ee-919a-4a0e4cd77954\',
      \'revision_timestamp\' => \'1423230484\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Roland az egyetemen tanult vállalati pénzügyekkel kapcsolatos elméleti ismereteket felhasználva szeretne a GTK által gyakorlatiorientáltabbá válni. Ehhez a hazai húzóágazatok termékpályáinak, valamint ezek értéketési láncainak megismerését tartja fontosnak.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Roland az egyetemen tanult vállalati pénzügyekkel kapcsolatos elméleti ismereteket felhasználva szeretne a GTK által gyakorlatiorientáltabbá válni. Ehhez a hazai húzóágazatok termékpályáinak, valamint ezek értéketési láncainak megismerését tartja fontosnak.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'252\',
            \'uid\' => \'3\',
            \'filename\' => \'Rakoczi Roland.jpg\',
            \'uri\' => \'public://Rakoczi Roland.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22594\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675629\',
            \'type\' => \'image\',
            \'uuid\' => \'ea956829-f0b5-4978-b813-d858d36fc487\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'166\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'166\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010 - 2013: BBTE KGTK, egyetemi kézpés, magyar tagozat,&nbsp;Pénzügy és Bankszakirány<br />\\r\\n2012: PTE KGTK, egyetemi képzés, angol tagozat, Pénzügy és Számvitel alapszak</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010 - 2013: BBTE KGTK, egyetemi kézpés, magyar tagozat, Pénzügy és Bankszakirány<br />\\n2012: PTE KGTK, egyetemi képzés, angol tagozat, Pénzügy és Számvitel alapszak</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Rákoczi Roland\',
            \'format\' => NULL,
            \'safe_value\' => \'Rákoczi Roland\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Rákoczi Roland\',
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
      \'last_comment_timestamp\' => \'1423230484\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1133\',
        \'source\' => \'node/1122\',
        \'alias\' => \'rákoczi-roland\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'997\',
      \'uid\' => \'3\',
      \'title\' => \'Viszkievicz András \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b9c574ea-3c59-455f-b1a8-143d45c3618b\',
      \'nid\' => \'997\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423227297\',
      \'changed\' => \'1423227297\',
      \'tnid\' => \'704\',
      \'translate\' => \'0\',
      \'uuid\' => \'689f8f74-d062-45c2-b8f2-6d33c4265e99\',
      \'revision_timestamp\' => \'1423227297\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Actuarial Analist, Aegon Asigurări, Ungaria</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Actuarial Analist, Aegon Asigurări, Ungaria</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1005\',
            \'uid\' => \'3\',
            \'filename\' => \'viszkievicz Cropped.jpg\',
            \'uri\' => \'public://viszkievicz Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22572\',
            \'status\' => \'1\',
            \'timestamp\' => \'1423227234\',
            \'type\' => \'image\',
            \'uuid\' => \'0504f29c-11d3-4187-ac88-0741b20278e7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Viszkievicz András \',
            \'format\' => NULL,
            \'safe_value\' => \'Viszkievicz András \',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Viszkievicz András \',
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
      \'last_comment_timestamp\' => \'1423227297\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1008\',
        \'source\' => \'node/997\',
        \'alias\' => \'viszkievicz-andrás\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'979\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Bálint\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1705e62b-be23-45f3-bbfb-4ad5e9069c82\',
      \'nid\' => \'979\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226437\',
      \'changed\' => \'1423226437\',
      \'tnid\' => \'695\',
      \'translate\' => \'0\',
      \'uuid\' => \'6a2ff994-b3df-4c26-b3ca-1b21515b6f6f\',
      \'revision_timestamp\' => \'1423226437\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>assistant professor, Babeş-Bolyai University</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>assistant professor, Babeş-Bolyai University</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'548\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy Balint Cropped.jpg\',
            \'uri\' => \'public://Nagy Balint Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30199\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852476\',
            \'type\' => \'image\',
            \'uuid\' => \'0353aa5c-b487-42ee-b4ca-24dc5d5c38bd\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Nagy Bálint\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Bálint\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Nagy Bálint\',
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
      \'last_comment_timestamp\' => \'1423226437\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'990\',
        \'source\' => \'node/979\',
        \'alias\' => \'nagy-bálint\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1121\',
      \'uid\' => \'3\',
      \'title\' => \'Rácz Béla Gergely\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8a4a5ef9-e8f3-4865-8211-645b6b6e1126\',
      \'nid\' => \'1121\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230482\',
      \'changed\' => \'1423230482\',
      \'tnid\' => \'912\',
      \'translate\' => \'0\',
      \'uuid\' => \'6c70db70-2595-407b-866e-92b9da1bb914\',
      \'revision_timestamp\' => \'1423230482\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coordonator\',
            \'format\' => NULL,
            \'safe_value\' => \'Coordonator\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\r\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'591\',
            \'uid\' => \'3\',
            \'filename\' => \'RaczBela.jpg\',
            \'uri\' => \'public://RaczBela_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34537\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421856117\',
            \'type\' => \'image\',
            \'uuid\' => \'028c5f63-b4cd-409a-a2c6-efec36b7930d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés,&nbsp;Vállalati pénzügyi menedzsment&nbsp;szakirány<br />\\r\\n2007-2010: BBTE KGTK, egyetemi&nbsp;kézpés, magyar tagozat, Bank és&nbsp;Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés, Vállalati pénzügyi menedzsment szakirány<br />\\n2007-2010: BBTE KGTK, egyetemi kézpés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Rácz Béla Gergely\',
            \'format\' => NULL,
            \'safe_value\' => \'Rácz Béla Gergely\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Rácz Béla Gergely\',
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
      \'last_comment_timestamp\' => \'1423230482\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1132\',
        \'source\' => \'node/1121\',
        \'alias\' => \'rácz-béla-gergely-0\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1126\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Krisztián\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4ebc45c3-b1f5-4c7b-89ae-57e7b1bcf91b\',
      \'nid\' => \'1126\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230538\',
      \'changed\' => \'1423230538\',
      \'tnid\' => \'661\',
      \'translate\' => \'0\',
      \'uuid\' => \'6eac8b88-aa75-4e8c-83b7-22f0b8bd5f96\',
      \'revision_timestamp\' => \'1423230538\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Chimszed Invest SRL</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Chimszed Invest SRL</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'258\',
            \'uid\' => \'3\',
            \'filename\' => \'szkr.jpg\',
            \'uri\' => \'public://szkr.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'44259\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676220\',
            \'type\' => \'image\',
            \'uuid\' => \'cbc5aea2-0264-40b5-8cbd-348bbb424beb\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'167\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'167\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vállalkozásmenedzsment - MSc<br />\\r\\nMenedzsment - BSc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Vállalkozásmenedzsment - MSc<br />\\nMenedzsment - BSc</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Székely Krisztián\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Krisztián\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
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
      \'last_comment_timestamp\' => \'1423230538\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1137\',
        \'source\' => \'node/1126\',
        \'alias\' => \'székely-krisztián\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'984\',
      \'uid\' => \'3\',
      \'title\' => \'Răzvan Mustață\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'19ce9677-5e77-4b46-8624-d377f6e227be\',
      \'nid\' => \'984\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226598\',
      \'changed\' => \'1423226598\',
      \'tnid\' => \'699\',
      \'translate\' => \'0\',
      \'uuid\' => \'6f699b96-0c44-4425-bf6a-b0cf71596948\',
      \'revision_timestamp\' => \'1423226598\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>the vice-decan of Babeş-Bolyai University, Faculty of Economics and Business Administration</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>the vice-decan of Babeş-Bolyai University, Faculty of Economics and Business Administration</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'549\',
            \'uid\' => \'3\',
            \'filename\' => \'razvan_mustata Cropped.jpg\',
            \'uri\' => \'public://razvan_mustata Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'35032\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852501\',
            \'type\' => \'image\',
            \'uuid\' => \'063ef6f9-6e7d-4ac1-b49b-a6871682990b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Răzvan Mustață\',
            \'format\' => NULL,
            \'safe_value\' => \'Răzvan Mustață\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Răzvan Mustață\',
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
      \'last_comment_timestamp\' => \'1423226598\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'995\',
        \'source\' => \'node/984\',
        \'alias\' => \'răzvan-mustață\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1118\',
      \'uid\' => \'3\',
      \'title\' => \'Rákoczi Roland\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d44336b3-a4d7-47d5-8c34-24f70a0c0b2b\',
      \'nid\' => \'1118\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230458\',
      \'changed\' => \'1423230458\',
      \'tnid\' => \'655\',
      \'translate\' => \'0\',
      \'uuid\' => \'735025c5-346e-4899-b3b9-6a2f3770780b\',
      \'revision_timestamp\' => \'1423230458\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Roland az egyetemen tanult vállalati pénzügyekkel kapcsolatos elméleti ismereteket felhasználva szeretne a GTK által gyakorlatiorientáltabbá válni. Ehhez a hazai húzóágazatok termékpályáinak, valamint ezek értéketési láncainak megismerését tartja fontosnak.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Roland az egyetemen tanult vállalati pénzügyekkel kapcsolatos elméleti ismereteket felhasználva szeretne a GTK által gyakorlatiorientáltabbá válni. Ehhez a hazai húzóágazatok termékpályáinak, valamint ezek értéketési láncainak megismerését tartja fontosnak.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'252\',
            \'uid\' => \'3\',
            \'filename\' => \'Rakoczi Roland.jpg\',
            \'uri\' => \'public://Rakoczi Roland.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22594\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675629\',
            \'type\' => \'image\',
            \'uuid\' => \'ea956829-f0b5-4978-b813-d858d36fc487\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'166\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'166\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010 - 2013: BBTE KGTK, egyetemi kézpés, magyar tagozat,&nbsp;Pénzügy és Bankszakirány<br />\\r\\n2012: PTE KGTK, egyetemi képzés, angol tagozat, Pénzügy és Számvitel alapszak</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010 - 2013: BBTE KGTK, egyetemi kézpés, magyar tagozat, Pénzügy és Bankszakirány<br />\\n2012: PTE KGTK, egyetemi képzés, angol tagozat, Pénzügy és Számvitel alapszak</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Rákoczi Roland\',
            \'format\' => NULL,
            \'safe_value\' => \'Rákoczi Roland\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Rákoczi Roland\',
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
      \'last_comment_timestamp\' => \'1423230458\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1129\',
        \'source\' => \'node/1118\',
        \'alias\' => \'rákoczi-roland\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'976\',
      \'uid\' => \'3\',
      \'title\' => \'Molnár Bálint\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8721405f-cc5d-4b10-ab89-98c9f660fd4e\',
      \'nid\' => \'976\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226379\',
      \'changed\' => \'1423226379\',
      \'tnid\' => \'694\',
      \'translate\' => \'0\',
      \'uuid\' => \'736603df-fe0f-4e99-af02-4b3e7bf2d403\',
      \'revision_timestamp\' => \'1423226379\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>marketing and communications manager at EIT ICT Labs Budapest</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>marketing and communications manager at EIT ICT Labs Budapest</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'562\',
            \'uid\' => \'3\',
            \'filename\' => \'MolnarB Cropped.jpg\',
            \'uri\' => \'public://MolnarB Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25231\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853559\',
            \'type\' => \'image\',
            \'uuid\' => \'0e215cd4-38ca-402c-bf7b-a4d470d31a1f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Molnár Bálint\',
            \'format\' => NULL,
            \'safe_value\' => \'Molnár Bálint\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Molnár Bálint\',
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
      \'last_comment_timestamp\' => \'1423226379\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'987\',
        \'source\' => \'node/976\',
        \'alias\' => \'molnár-bálint\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'664\',
      \'uid\' => \'3\',
      \'title\' => \'Vincze Tamás\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'06dc6fb4-cef4-4d40-b3b8-6b170a5db58d\',
      \'nid\' => \'664\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421676448\',
      \'changed\' => \'1421676448\',
      \'tnid\' => \'664\',
      \'translate\' => \'0\',
      \'uuid\' => \'7393e053-d602-4838-b58a-d96be320db18\',
      \'revision_timestamp\' => \'1421676448\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>East Grain SRL – kereskedelmi igazgató</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>East Grain SRL – kereskedelmi igazgató</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Tamás közgázas életének első évében jelentkezett a GTK-ba, aminek minden lépcsőfokát végigjárta: a rendes tagi státusztól, szeniori, majd rövid időre a szervezet koordinátor helyettesi pozíciójáig jutott el. Jelenleg az alumni tagok egyre bővülő listáját gyarapítja.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A GTK-nak elsősorban a munkához való pozitív hozzáállást és a rendszerben való gondolkodást köszönheti - meg természetesen egy sokoldalú szakmai és baráti közösséghez való tartozást.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Karrierét a piackutató és tanácsadó ágazatban kezdte, de dolgozott a megújuló-energia ágazatban, turizmusban és a bankrendszerben is. Jelenleg gabona kereskedőként igyekszik kamatoztatni a főképp GTK-ban szerzett sokszínű gazdasági ismereteit</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Tamás közgázas életének első évében jelentkezett a GTK-ba, aminek minden lépcsőfokát végigjárta: a rendes tagi státusztól, szeniori, majd rövid időre a szervezet koordinátor helyettesi pozíciójáig jutott el. Jelenleg az alumni tagok egyre bővülő listáját gyarapítja.</p>\\n<p class=\\"rtejustify\\">A GTK-nak elsősorban a munkához való pozitív hozzáállást és a rendszerben való gondolkodást köszönheti - meg természetesen egy sokoldalú szakmai és baráti közösséghez való tartozást.</p>\\n<p class=\\"rtejustify\\">Karrierét a piackutató és tanácsadó ágazatban kezdte, de dolgozott a megújuló-energia ágazatban, turizmusban és a bankrendszerben is. Jelenleg gabona kereskedőként igyekszik kamatoztatni a főképp GTK-ban szerzett sokszínű gazdasági ismereteit</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'261\',
            \'uid\' => \'3\',
            \'filename\' => \'vt.jpg\',
            \'uri\' => \'public://vt.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30061\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676448\',
            \'type\' => \'image\',
            \'uuid\' => \'1f3714d5-2e79-4409-85db-ebb7736c276e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'175\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'175\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010 – 2012: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalati Pénzügyi Menedzsment szakirány&nbsp;<br />\\r\\n2007 – 2010: BBTE KGTK, alapképzés, magyar tagozat, Menedzsment szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010 – 2012: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalati Pénzügyi Menedzsment szakirány <br />\\n2007 – 2010: BBTE KGTK, alapképzés, magyar tagozat, Menedzsment szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Vincze Tamás\',
            \'format\' => NULL,
            \'safe_value\' => \'Vincze Tamás\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
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
      \'last_comment_timestamp\' => \'1421676448\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'674\',
        \'source\' => \'node/664\',
        \'alias\' => \'vincze-tamás\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1190\',
      \'uid\' => \'3\',
      \'title\' => \'2007-2008\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1d7530dc-0bc1-4360-a3cc-01b90be699f9\',
      \'nid\' => \'1190\',
      \'type\' => \'result\',
      \'language\' => \'ro\',
      \'created\' => \'1424175049\',
      \'changed\' => \'1424263590\',
      \'tnid\' => \'1188\',
      \'translate\' => \'0\',
      \'uuid\' => \'75d5d7d0-bf1a-46b5-bc07-a5096fadaa7e\',
      \'revision_timestamp\' => \'1424263590\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2007/2008 a fost anul înființării. A început&nbsp;implementarea programului pilot,&nbsp;Management Shadowing. Membrii au obținut rezultate remarcabile la competiții.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2007/2008 a fost anul înființării. A început implementarea programului pilot, Management Shadowing. Membrii au obținut rezultate remarcabile la competiții.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Concursul Internaţional de Studii de Caz în Finanţe, Győr:</strong></p>\\r\\n\\r\\n<p>Katalin Ferencz, Szilárd Szakács şi Levente Szász -&nbsp;<strong>Locul II.</strong></p>\\r\\n\\r\\n<p><strong>Concursul Naţional de Studiu de Caz, Budapesta:</strong></p>\\r\\n\\r\\n<p>Katalin Ferencz, Szilárd Szakács şi Levente Szász - <strong>participare</strong></p>\\r\\n\\r\\n<p><strong>Global Management Challenge</strong><strong>:</strong></p>\\r\\n\\r\\n<p>Katalin Ferencz, Szilárd Szakács, Levente Szász şi Timea Laszló s-a calificat între primele 16 echipe</p>\\r\\n\\r\\n<p><strong>Concursul de Studiu de Caz</strong>,<strong> UBB FSEGA</strong>:</p>\\r\\n\\r\\n<p>Barok István, Réka Birton, Márta Lőrincz şi Tamás Vincze -&nbsp;<strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>Concursul de Studii de Caz în Management din Cluj-Napoca:</strong></p>\\r\\n\\r\\n<p>Szilárd Szakács -&nbsp;<strong>Locul I.</strong></p>\\r\\n\\r\\n<p>Dénes Laczkó -&nbsp;<strong>menţiune</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Márta Lőrincz şi Tamás Vincze -&nbsp;<strong>participare</strong></p>\\r\\n\\r\\n<p><strong>Concursului de Studii de Caz din Miercurea Ciuc:</strong></p>\\r\\n\\r\\n<p>István Barok şi Márta Lőrincz - <strong>participare</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Concursul Internaţional de Studii de Caz în Finanţe, Győr:</strong></p>\\n<p>Katalin Ferencz, Szilárd Szakács şi Levente Szász - <strong>Locul II.</strong></p>\\n<p><strong>Concursul Naţional de Studiu de Caz, Budapesta:</strong></p>\\n<p>Katalin Ferencz, Szilárd Szakács şi Levente Szász - <strong>participare</strong></p>\\n<p><strong>Global Management Challenge</strong><strong>:</strong></p>\\n<p>Katalin Ferencz, Szilárd Szakács, Levente Szász şi Timea Laszló s-a calificat între primele 16 echipe</p>\\n<p><strong>Concursul de Studiu de Caz</strong>,<strong> UBB FSEGA</strong>:</p>\\n<p>Barok István, Réka Birton, Márta Lőrincz şi Tamás Vincze - <strong>Locul I.</strong></p>\\n<p><strong>Concursul de Studii de Caz în Management din Cluj-Napoca:</strong></p>\\n<p>Szilárd Szakács - <strong>Locul I.</strong></p>\\n<p>Dénes Laczkó - <strong>menţiune</strong></p>\\n<p>István Barok, Réka Birton, Márta Lőrincz şi Tamás Vincze - <strong>participare</strong></p>\\n<p><strong>Concursului de Studii de Caz din Miercurea Ciuc:</strong></p>\\n<p>István Barok şi Márta Lőrincz - <strong>participare</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Publicaţii</p>\\r\\n\\r\\n<p>Tamás Bálint, Attila Lőrinczi (cu un coauthor), apărută în Forumul Economic / Közgazdász Fórum (noiembrie 2007)</p>\\r\\n\\r\\n<p>Szilárd Szakács şi alţi doi coautori, apărută în Forumul Economic / Közgazdász Fórum (iunie 2008)</p>\\r\\n\\r\\n<p>Trei publicaţii aparţinând lui Levente Szász (una cu un coautor) apărute în Forumul Economic / Közgazdász Fórum (mai, iunie, august 2008)</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Publicaţii</p>\\n<p>Tamás Bálint, Attila Lőrinczi (cu un coauthor), apărută în Forumul Economic / Közgazdász Fórum (noiembrie 2007)</p>\\n<p>Szilárd Szakács şi alţi doi coautori, apărută în Forumul Economic / Közgazdász Fórum (iunie 2008)</p>\\n<p>Trei publicaţii aparţinând lui Levente Szász (una cu un coautor) apărute în Forumul Economic / Közgazdász Fórum (mai, iunie, august 2008)</p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1424175049\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1201\',
        \'source\' => \'node/1190\',
        \'alias\' => \'2007-2008\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'627\',
      \'uid\' => \'1\',
      \'title\' => \'2013-2014 tevékenységi beszámoló\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7bd83631-1b89-4445-befe-8881a98dd342\',
      \'nid\' => \'627\',
      \'type\' => \'result\',
      \'language\' => \'hu\',
      \'created\' => \'1421521161\',
      \'changed\' => \'1424262291\',
      \'tnid\' => \'627\',
      \'translate\' => \'0\',
      \'uuid\' => \'779f68e5-c061-40f3-9955-7e7d3cbac796\',
      \'revision_timestamp\' => \'1424262291\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">2013-2014-as tanévben 12 esettanulmány versenyen vettek részt a tagok és 11 díjat hoztak el Kolozsvárra.&nbsp;Az ETDK-n a tizenhárom GTK tag résztvevő mind díjazva volt. A&nbsp;leadership program keretén belül, számos képzésen vettek részt.&nbsp;Középiskolásoknak szóló program keretében, a kolozsvári Báthory István Elméleti Líceum XI. osztályos diákjai vehettek részt egy gyakorlatias üzleti tervezés képséesorozaton.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">2013-2014-as tanévben 12 esettanulmány versenyen vettek részt a tagok és 11 díjat hoztak el Kolozsvárra. Az ETDK-n a tizenhárom GTK tag résztvevő mind díjazva volt. A leadership program keretén belül, számos képzésen vettek részt. Középiskolásoknak szóló program keretében, a kolozsvári Báthory István Elméleti Líceum XI. osztályos diákjai vehettek részt egy gyakorlatias üzleti tervezés képséesorozaton.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>Év Esetoldója Verseny - Hungarian Business Case Society, Budapest</strong>:&nbsp;</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Demeter Zselyke - <strong>I. díj és Legjobb Prezentáló díja</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni tag) - <strong>II. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Entrepreneurship Competition Vilnius, Vilnius (Litvánia):</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Albert Gáspár, Ábrán Csilla, Kovács Anita és Német Hunor - <strong>6. hely</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>International Case Competition@Maastricht, Maastricht (Hollandia):</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábrán Csilla, Albert Gáspár, Kerekes Zsuzsa és Német Hunor - <strong>elődöntő csoport III. hely</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>BCG Strategy Cup 2014, Budapest: </strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni) - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Dr. Susánszky János Esettanulmány-megoldó Emlékverseny, Miskolc:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Czirják Renáta, Demeter Zselyke, Kiss Alpár és Székely Rita - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XIII. Tímár László Tanulmányi Emlékverseny, Veszprém:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Demeter Zselyke, Kerekes Zsuzsa, Kiss Alpár és Kovács Anita - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Demeter Zselyke csapattag <strong>legjobb külföldi előadó különdíja</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XV. Országos Esettanulmány Verseny, Budapest:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni), Benkő Zsolt (alumni),&nbsp;Demeter Zselyke, Kiss Alpár</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>KICC- KPMG International Case Competition, Bukarest:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni), Ábrán Csilla,&nbsp;Czirják Renáta, Német Hunor - <strong>II. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XII. Országos Pénzügyi Esettanulmány Verseny, Győr:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Demeter Zselyke és Salamon Ádám (alumni) - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>IV. Üzleti Tervek Versenye, Sepsiszentgyörgy:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Kristály Csaba (alumni) - <strong>II. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>VI. Dr. Papp László Számviteli Verseny, Pécs:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni) - <strong>III. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>döntőbe került:</strong> Demeter Zselyke, Dombi Tünde,&nbsp;Kovács Anita, Székely Rita</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Kolozsvári Egyetemista Esettanulmány Verseny (KEEV) 2014, Kolozsvár:</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Demeter Zselyke, Czirják Renáta, Kiss Alpár, Székely Rita - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábrán Csilla, Albert Gáspár, Kerekes Zsuzsa, Német Hunor - <strong>II. díj</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>Év Esetoldója Verseny - Hungarian Business Case Society, Budapest</strong>: </p>\\n<p class=\\"rtejustify\\">Demeter Zselyke - <strong>I. díj és Legjobb Prezentáló díja</strong></p>\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni tag) - <strong>II. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>Entrepreneurship Competition Vilnius, Vilnius (Litvánia):</strong></p>\\n<p class=\\"rtejustify\\">Albert Gáspár, Ábrán Csilla, Kovács Anita és Német Hunor - <strong>6. hely</strong></p>\\n<p class=\\"rtejustify\\"><strong>International Case <a href=\\"mailto:Competition@Maastricht\\">Competition@Maastricht</a>, Maastricht (Hollandia):</strong></p>\\n<p class=\\"rtejustify\\">Ábrán Csilla, Albert Gáspár, Kerekes Zsuzsa és Német Hunor - <strong>elődöntő csoport III. hely</strong></p>\\n<p class=\\"rtejustify\\"><strong>BCG Strategy Cup 2014, Budapest: </strong></p>\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni) - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>Dr. Susánszky János Esettanulmány-megoldó Emlékverseny, Miskolc:</strong></p>\\n<p class=\\"rtejustify\\">Czirják Renáta, Demeter Zselyke, Kiss Alpár és Székely Rita - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>XIII. Tímár László Tanulmányi Emlékverseny, Veszprém:</strong></p>\\n<p class=\\"rtejustify\\">Demeter Zselyke, Kerekes Zsuzsa, Kiss Alpár és Kovács Anita - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\">Demeter Zselyke csapattag <strong>legjobb külföldi előadó különdíja</strong></p>\\n<p class=\\"rtejustify\\"><strong>XV. Országos Esettanulmány Verseny, Budapest:</strong></p>\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni), Benkő Zsolt (alumni), Demeter Zselyke, Kiss Alpár</p>\\n<p class=\\"rtejustify\\"><strong>KICC- KPMG International Case Competition, Bukarest:</strong></p>\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni), Ábrán Csilla, Czirják Renáta, Német Hunor - <strong>II. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>XII. Országos Pénzügyi Esettanulmány Verseny, Győr:</strong></p>\\n<p class=\\"rtejustify\\">Demeter Zselyke és Salamon Ádám (alumni) - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>IV. Üzleti Tervek Versenye, Sepsiszentgyörgy:</strong></p>\\n<p class=\\"rtejustify\\">Kristály Csaba (alumni) - <strong>II. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>VI. Dr. Papp László Számviteli Verseny, Pécs:</strong></p>\\n<p class=\\"rtejustify\\">Ábrahám Krisztina (alumni) - <strong>III. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>döntőbe került:</strong> Demeter Zselyke, Dombi Tünde, Kovács Anita, Székely Rita</p>\\n<p class=\\"rtejustify\\"><strong>Kolozsvári Egyetemista Esettanulmány Verseny (KEEV) 2014, Kolozsvár:</strong></p>\\n<p class=\\"rtejustify\\">Demeter Zselyke, Czirják Renáta, Kiss Alpár, Székely Rita - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\">Ábrán Csilla, Albert Gáspár, Kerekes Zsuzsa, Német Hunor - <strong>II. díj</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>Menedzsment szekció I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Albert&nbsp;Gáspár:&nbsp;<em>A szolgálatosodás hatása az üzleti modell és pénzügyi&nbsp;eredményesség alakulására -&nbsp;esettanulmány egy gyógyszeripari vállalatnál</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Demeter Zselyke:&nbsp;<em>Versenyző üzleti modellek: hagyományos vs.&nbsp;rövid ellátási láncok az élelmiszeriparban</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Menedzsment szekció II. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Kiss Alpár, Székely Rita, Czirják Renáta: <em>A 3PL partnerek szerepe a romániai élelmiszeripari ellátási láncokban</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Német Hunor Attila, Guttmann Csongor István, Kovács Anita:&nbsp;<em>Hogyan tovább, Farmec? - növekedési stratégia kialakítása&nbsp;az északnyugat-európai régióban</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Menedzsment szekció- III. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Dombi Tünde:<strong>&nbsp;</strong><em>Az Optiko Kft. terjeszkedési stratégiája az optikai iparágban</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Fehér Attila, Fekete Réka, Demeter Zselyke:<em>&nbsp;Egy élelmiszeripari vállalat piaci stratégiája - esettanulmány a&nbsp;Hochland vállalatról</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Bank- és Pénzügy szekció- dicséret</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Ábárn Csilla-Hajnalka:&nbsp;<em>A Marsorom gumiabroncs-forgalmazó vállalat&nbsp;kereskedelmi hitelportfoliójának elemzése</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>Menedzsment szekció I. díj</strong></p>\\n<p class=\\"rtejustify\\">Albert Gáspár: <em>A szolgálatosodás hatása az üzleti modell és pénzügyi eredményesség alakulására - esettanulmány egy gyógyszeripari vállalatnál</em></p>\\n<p class=\\"rtejustify\\">Demeter Zselyke: <em>Versenyző üzleti modellek: hagyományos vs. rövid ellátási láncok az élelmiszeriparban</em></p>\\n<p class=\\"rtejustify\\"><strong>Menedzsment szekció II. díj</strong></p>\\n<p class=\\"rtejustify\\">Kiss Alpár, Székely Rita, Czirják Renáta: <em>A 3PL partnerek szerepe a romániai élelmiszeripari ellátási láncokban</em></p>\\n<p class=\\"rtejustify\\">Német Hunor Attila, Guttmann Csongor István, Kovács Anita: <em>Hogyan tovább, Farmec? - növekedési stratégia kialakítása az északnyugat-európai régióban</em></p>\\n<p class=\\"rtejustify\\"><strong>Menedzsment szekció- III. díj</strong></p>\\n<p class=\\"rtejustify\\">Dombi Tünde:<strong> </strong><em>Az Optiko Kft. terjeszkedési stratégiája az optikai iparágban</em></p>\\n<p class=\\"rtejustify\\">Fehér Attila, Fekete Réka, Demeter Zselyke:<em> Egy élelmiszeripari vállalat piaci stratégiája - esettanulmány a Hochland vállalatról</em></p>\\n<p class=\\"rtejustify\\"><strong>Bank- és Pénzügy szekció- dicséret</strong></p>\\n<p class=\\"rtejustify\\">Ábárn Csilla-Hajnalka: <em>A Marsorom gumiabroncs-forgalmazó vállalat kereskedelmi hitelportfoliójának elemzése</em></p>\\n<p class=\\"rtejustify\\"> </p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Célja:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>gyakorlatias gazdasági tudás átadása</li>\\r\\n\\t<li>üzleti logika elsajátítása</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>5 k</strong><strong>é</strong><strong>pz</strong><strong>é</strong><strong>s:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Vállalkozói magatartás, vállalkozás, vállalkozási ötlet és iparági elemzés</li>\\r\\n\\t<li>Működési terv és emberi erőforrás menedzsment</li>\\r\\n\\t<li>Marketing</li>\\r\\n\\t<li>Pénzügy</li>\\r\\n\\t<li>Prezentációtechnika</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Résztvevők:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>30 diák</li>\\r\\n\\t<li>8 csapat</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Programfelelősök:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Ábrahám Krisztina</li>\\r\\n\\t<li>Rácz Béla Gergely</li>\\r\\n\\t<li>Vincze Tamás</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Célja:</strong></p>\\n<ul><li>gyakorlatias gazdasági tudás átadása</li>\\n<li>üzleti logika elsajátítása</li>\\n</ul><p><strong>5 k</strong><strong>é</strong><strong>pz</strong><strong>é</strong><strong>s:</strong></p>\\n<ul><li>Vállalkozói magatartás, vállalkozás, vállalkozási ötlet és iparági elemzés</li>\\n<li>Működési terv és emberi erőforrás menedzsment</li>\\n<li>Marketing</li>\\n<li>Pénzügy</li>\\n<li>Prezentációtechnika</li>\\n</ul><p><strong>Résztvevők:</strong></p>\\n<ul><li>30 diák</li>\\n<li>8 csapat</li>\\n</ul><p><strong>Programfelelősök:</strong></p>\\n<ul><li>Ábrahám Krisztina</li>\\n<li>Rácz Béla Gergely</li>\\n<li>Vincze Tamás</li>\\n</ul>",
          ),
        ),
      ),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>Küllői Péter</strong>,&nbsp;Mosoly Alapítvány alapító tagja, a Bátor Tábor kuratóriumi elnöke</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Jókay Károly</strong>,&nbsp;a Magyar-Amerikai Fulbright Bizottság ügyvezető igazgatója és a CEU professzora</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Helen Roberts</strong>, a University College London kutatója</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Rodney Baker</strong>, a London School of Economics professzora</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Konrad F. Kaschek</strong>,&nbsp;a Bosch Automotive Electronics kolozsvári telepmenedzsere</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Răzvan Mustaţă</strong>,&nbsp;a BBTE, KGKT Kar dékánhelyettese</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Tombor András</strong>, a Mathias Corvinus Kollégium alapítója</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Malcolm Gillies</strong>, a London Metropolitan University rektora</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Radácsi László</strong>, a Budapesti Gazdasági Főiskola tudományos főmunkatársa,&nbsp;a SmartLab Tanácsadó Kft. alapító vezetője</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Kerezsi Miklós</strong>, az East Consulting Kft. tulajdonos-menedzsere</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Molnár Bálint</strong>, az EIT ICT Labs Budapest marketing és kommunikációs igazgatója</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Mercé Mach</strong>,&nbsp;a University of Barcelona, Faculty of Economics and Business oktatója</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Keszeg Anna</strong>,&nbsp;a BBTE Politika-, Közigazgatás- és Kommunikációtudományi Kar adjunktusa</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Ábrahám Zsolt </strong>és <strong>Hoffmann Janka</strong>, a Hungarian Business Case Society tagjai</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Kádár Magor&nbsp;</strong>a BBTE Politika-, Közigazgatás- és Kommunikációtudományi Kar docense</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. David Sims</strong>, a City University London – Cass Business School professzora</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Takács József</strong>, a Vodafone Hungary stratégiai igazgatója</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Viszkievicz András</strong>, az Aegon Biztosító biztosítási elemzője</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. David Venter</strong>, a belgiumi Vlerick Management School professzora,&nbsp;Nelson Mandela egykori kommunikációs tanácsadója</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>dr. Daniel Ding</strong>, a michigani Ferris State University professzora</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>Küllői Péter</strong>, Mosoly Alapítvány alapító tagja, a Bátor Tábor kuratóriumi elnöke</p>\\n<p class=\\"rtejustify\\"><strong>dr. Jókay Károly</strong>, a Magyar-Amerikai Fulbright Bizottság ügyvezető igazgatója és a CEU professzora</p>\\n<p class=\\"rtejustify\\"><strong>dr. Helen Roberts</strong>, a University College London kutatója</p>\\n<p class=\\"rtejustify\\"><strong>dr. Rodney Baker</strong>, a London School of Economics professzora</p>\\n<p class=\\"rtejustify\\"><strong>dr. Konrad F. Kaschek</strong>, a Bosch Automotive Electronics kolozsvári telepmenedzsere</p>\\n<p class=\\"rtejustify\\"><strong>dr. Răzvan Mustaţă</strong>, a BBTE, KGKT Kar dékánhelyettese</p>\\n<p class=\\"rtejustify\\"><strong>Tombor András</strong>, a Mathias Corvinus Kollégium alapítója</p>\\n<p class=\\"rtejustify\\"><strong>dr. Malcolm Gillies</strong>, a London Metropolitan University rektora</p>\\n<p class=\\"rtejustify\\"><strong>dr. Radácsi László</strong>, a Budapesti Gazdasági Főiskola tudományos főmunkatársa, a SmartLab Tanácsadó Kft. alapító vezetője</p>\\n<p class=\\"rtejustify\\"><strong>Kerezsi Miklós</strong>, az East Consulting Kft. tulajdonos-menedzsere</p>\\n<p class=\\"rtejustify\\"><strong>Molnár Bálint</strong>, az EIT ICT Labs Budapest marketing és kommunikációs igazgatója</p>\\n<p class=\\"rtejustify\\"><strong>dr. Mercé Mach</strong>, a University of Barcelona, Faculty of Economics and Business oktatója</p>\\n<p class=\\"rtejustify\\"><strong>dr. Keszeg Anna</strong>, a BBTE Politika-, Közigazgatás- és Kommunikációtudományi Kar adjunktusa</p>\\n<p class=\\"rtejustify\\"><strong>Ábrahám Zsolt </strong>és <strong>Hoffmann Janka</strong>, a Hungarian Business Case Society tagjai</p>\\n<p class=\\"rtejustify\\"><strong>dr. Kádár Magor </strong>a BBTE Politika-, Közigazgatás- és Kommunikációtudományi Kar docense</p>\\n<p class=\\"rtejustify\\"><strong>dr. David Sims</strong>, a City University London – Cass Business School professzora</p>\\n<p class=\\"rtejustify\\"><strong>Takács József</strong>, a Vodafone Hungary stratégiai igazgatója</p>\\n<p class=\\"rtejustify\\"><strong>Viszkievicz András</strong>, az Aegon Biztosító biztosítási elemzője</p>\\n<p class=\\"rtejustify\\"><strong>dr. David Venter</strong>, a belgiumi Vlerick Management School professzora, Nelson Mandela egykori kommunikációs tanácsadója</p>\\n<p class=\\"rtejustify\\"><strong>dr. Daniel Ding</strong>, a michigani Ferris State University professzora</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>7th International Management Conference </strong><strong>\\"Managerial Challenges of the Contemporary Society\\" Albert Gáspár - Szász Levente (2014)</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">\\"<em>The impact of servitization on the manufacturer\'s business model and financial performance - a case study of a Romanian pharmaceutical company</em>\\"</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>7th International Management Conference </strong><strong>\\"Managerial Challenges of the Contemporary Society\\" Albert Gáspár - Szász Levente (2014)</strong></p>\\n<p class=\\"rtejustify\\">\\"<em>The impact of servitization on the manufacturer\'s business model and financial performance - a case study of a Romanian pharmaceutical company</em>\\"</p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Czirják Renáta és Székely Rita @ Tipo Holding</p>\\r\\n\\r\\n<p>Kovács Anita és Dombi Tünde @ East Consulting</p>\\r\\n\\r\\n<p>Német Hunor és Kiss Alpár @ Concorde Alapkezelő</p>\\r\\n\\r\\n<p>Fekete Réka és Fehér Attila @ East Grain</p>\\r\\n\\r\\n<p>Albert Gáspár, Guttmann Csongor és Kerekes Zsuzsa @ Romespa</p>\\r\\n\\r\\n<p>Ábrán Csilla @ MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Czirják Renáta és Székely Rita @ Tipo Holding</p>\\n<p>Kovács Anita és Dombi Tünde @ East Consulting</p>\\n<p>Német Hunor és Kiss Alpár @ Concorde Alapkezelő</p>\\n<p>Fekete Réka és Fehér Attila @ East Grain</p>\\n<p>Albert Gáspár, Guttmann Csongor és Kerekes Zsuzsa @ Romespa</p>\\n<p>Ábrán Csilla @ MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1421521161\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'637\',
        \'source\' => \'node/627\',
        \'alias\' => \'2013-2014-tevékenységi-beszámoló\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1054\',
      \'uid\' => \'3\',
      \'title\' => \'Pásztor Timea\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7922b595-9d61-4511-8280-06c031226197\',
      \'nid\' => \'1054\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423229762\',
      \'changed\' => \'1423229762\',
      \'tnid\' => \'905\',
      \'translate\' => \'0\',
      \'uuid\' => \'7806fa50-7a7a-4cc4-a233-7d7f6fb68319\',
      \'revision_timestamp\' => \'1423229762\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'524\',
            \'uid\' => \'3\',
            \'filename\' => \'Pasztor Timi.jpg\',
            \'uri\' => \'public://Pasztor Timi.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'33186\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848084\',
            \'type\' => \'image\',
            \'uuid\' => \'681d5c6f-2909-418f-8890-1e6ee177e5a7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Pásztor Timea\',
            \'format\' => NULL,
            \'safe_value\' => \'Pásztor Timea\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1423229762\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1065\',
        \'source\' => \'node/1054\',
        \'alias\' => \'pásztor-timea\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'655\',
      \'uid\' => \'3\',
      \'title\' => \'Rákoczi Roland\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b1664c59-164c-4365-ba62-5518daa7ef32\',
      \'nid\' => \'655\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421675629\',
      \'changed\' => \'1421675629\',
      \'tnid\' => \'655\',
      \'translate\' => \'0\',
      \'uuid\' => \'78d1139d-2d46-40ec-bc53-d223f09a11e9\',
      \'revision_timestamp\' => \'1421675629\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Roland az egyetemen tanult vállalati pénzügyekkel kapcsolatos elméleti ismereteket felhasználva szeretne a GTK által gyakorlatiorientáltabbá válni. Ehhez a hazai húzóágazatok termékpályáinak, valamint ezek értéketési láncainak megismerését tartja fontosnak.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Roland az egyetemen tanult vállalati pénzügyekkel kapcsolatos elméleti ismereteket felhasználva szeretne a GTK által gyakorlatiorientáltabbá válni. Ehhez a hazai húzóágazatok termékpályáinak, valamint ezek értéketési láncainak megismerését tartja fontosnak.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'252\',
            \'uid\' => \'3\',
            \'filename\' => \'Rakoczi Roland.jpg\',
            \'uri\' => \'public://Rakoczi Roland.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'22594\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675629\',
            \'type\' => \'image\',
            \'uuid\' => \'ea956829-f0b5-4978-b813-d858d36fc487\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'166\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'166\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010 - 2013: BBTE KGTK, egyetemi kézpés, magyar tagozat,&nbsp;Pénzügy és Bankszakirány<br />\\r\\n2012: PTE KGTK, egyetemi képzés, angol tagozat, Pénzügy és Számvitel alapszak</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010 - 2013: BBTE KGTK, egyetemi kézpés, magyar tagozat, Pénzügy és Bankszakirány<br />\\n2012: PTE KGTK, egyetemi képzés, angol tagozat, Pénzügy és Számvitel alapszak</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Rákoczi Roland\',
            \'format\' => NULL,
            \'safe_value\' => \'Rákoczi Roland\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Rákoczi Roland\',
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
      \'last_comment_timestamp\' => \'1421675629\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'665\',
        \'source\' => \'node/655\',
        \'alias\' => \'rákoczi-roland\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'975\',
      \'uid\' => \'3\',
      \'title\' => \'Mészáros Csaba\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9c28228f-599b-4e1a-8a6a-2c86bfecda35\',
      \'nid\' => \'975\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226339\',
      \'changed\' => \'1423226339\',
      \'tnid\' => \'692\',
      \'translate\' => \'0\',
      \'uuid\' => \'79b3d01e-b188-42d4-9d0f-aadbc731c7bd\',
      \'revision_timestamp\' => \'1423226339\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>proprieter, Evopro</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>proprieter, Evopro</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'555\',
            \'uid\' => \'3\',
            \'filename\' => \'MeszarosCsaba Cropped.jpg\',
            \'uri\' => \'public://MeszarosCsaba Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'29398\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852649\',
            \'type\' => \'image\',
            \'uuid\' => \'ee0b2afe-28ae-4cfe-8764-66de60958267\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Mészáros Csaba\',
            \'format\' => NULL,
            \'safe_value\' => \'Mészáros Csaba\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Mészáros Csaba\',
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
      \'last_comment_timestamp\' => \'1423226339\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'986\',
        \'source\' => \'node/975\',
        \'alias\' => \'mészáros-csaba\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'987\',
      \'uid\' => \'3\',
      \'title\' => \'Rodney Baker\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fa5a2333-96ac-425a-8a52-9c5f8dedc715\',
      \'nid\' => \'987\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226701\',
      \'changed\' => \'1423226701\',
      \'tnid\' => \'700\',
      \'translate\' => \'0\',
      \'uuid\' => \'79b4c2f2-6a5c-4b82-ae59-4ea60433a6c3\',
      \'revision_timestamp\' => \'1423226701\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Emeritus Professor of Government, London School of Economics</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Emeritus Professor of Government, London School of Economics</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'299\',
            \'uid\' => \'3\',
            \'filename\' => \'rodney.jpg\',
            \'uri\' => \'public://rodney.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'45757\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421678161\',
            \'type\' => \'image\',
            \'uuid\' => \'d5bd5aeb-77f0-4365-801a-7d4a9643eda4\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'210\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'210\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Rodney Baker\',
            \'format\' => NULL,
            \'safe_value\' => \'Rodney Baker\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Rodney Baker\',
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
      \'last_comment_timestamp\' => \'1423226701\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'998\',
        \'source\' => \'node/987\',
        \'alias\' => \'rodney-baker\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'657\',
      \'uid\' => \'3\',
      \'title\' => \'Salamon Ádám\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9887aa14-f0d6-4fad-9029-21c6f44694e7\',
      \'nid\' => \'657\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421675817\',
      \'changed\' => \'1422260030\',
      \'tnid\' => \'657\',
      \'translate\' => \'0\',
      \'uuid\' => \'7f146169-ce23-4c9d-8190-46d7ee2c4924\',
      \'revision_timestamp\' => \'1422260030\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Misys Digital Channels, Budapest</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Misys Digital Channels, Budapest</p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Ádám másodéves egyetemi hallgatóként jelentkezett a GTK-ba, amely utólag egyik legjobb döntésének bizonyult. Az elmúlt év történéséit áttekintve Ádám úgy gondolja, hogy nagyon sok versenyen elért pozitív eredményei, munkahelyi kitartása és sikerei, illetve a munkához való pozitív és lelkes hozzáállása nagymértékben a GTK-ban szerzett tapasztalatoknak és az itt gyűjtött tudásnak köszönhető.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Karrierjét egy banki platformokat szolgáltató informatikai cégnél, az IND Groupnál kezdte Junior Projektmenedzserként, majd egy felvásárlás következtében a Misys Digital Channels divíziójában folytatta Projektmendzserként.&nbsp;Jelenleg leginkább a vállalat romániai ügyfeleire koncentrál, több bank esetében fő kapcsolattartó és képviseli a vállalatot, Account Managerként; emellett aktuális ill. új projektek implementációját menedzseli.&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Ádám másodéves egyetemi hallgatóként jelentkezett a GTK-ba, amely utólag egyik legjobb döntésének bizonyult. Az elmúlt év történéséit áttekintve Ádám úgy gondolja, hogy nagyon sok versenyen elért pozitív eredményei, munkahelyi kitartása és sikerei, illetve a munkához való pozitív és lelkes hozzáállása nagymértékben a GTK-ban szerzett tapasztalatoknak és az itt gyűjtött tudásnak köszönhető.</p>\\n<p class=\\"rtejustify\\">Karrierjét egy banki platformokat szolgáltató informatikai cégnél, az IND Groupnál kezdte Junior Projektmenedzserként, majd egy felvásárlás következtében a Misys Digital Channels divíziójában folytatta Projektmendzserként. Jelenleg leginkább a vállalat romániai ügyfeleire koncentrál, több bank esetében fő kapcsolattartó és képviseli a vállalatot, Account Managerként; emellett aktuális ill. új projektek implementációját menedzseli. </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'601\',
            \'uid\' => \'3\',
            \'filename\' => \'salamon_adam.jpg\',
            \'uri\' => \'public://salamon_adam.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32631\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421929844\',
            \'type\' => \'image\',
            \'uuid\' => \'ef9fcf4a-18be-43f7-830e-eb940ccfaf44\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2013 – 2015: BBTE KGTK, mesteri képzés, Vállalati Pénzügyi Menedzsment szakirány</p>\\r\\n\\r\\n<p>2010 – 2013: BBTE KGTK, alapképzés, Pénzügy és Bank szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2013 – 2015: BBTE KGTK, mesteri képzés, Vállalati Pénzügyi Menedzsment szakirány</p>\\n<p>2010 – 2013: BBTE KGTK, alapképzés, Pénzügy és Bank szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Salamon Ádám\',
            \'format\' => NULL,
            \'safe_value\' => \'Salamon Ádám\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
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
      \'last_comment_timestamp\' => \'1421675817\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'667\',
        \'source\' => \'node/657\',
        \'alias\' => \'salamon-ádám\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'725\',
      \'uid\' => \'1\',
      \'title\' => \'2009-2010 tevékenységi beszámoló\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0dcc3847-aaf1-4496-99ae-f752f87081eb\',
      \'nid\' => \'725\',
      \'type\' => \'result\',
      \'language\' => \'hu\',
      \'created\' => \'1421685990\',
      \'changed\' => \'1424263106\',
      \'tnid\' => \'725\',
      \'translate\' => \'0\',
      \'uuid\' => \'8063da97-9875-4edf-879f-a5cd15ccd1cf\',
      \'revision_timestamp\' => \'1424263106\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2009-2010-es tanévben a GTK tagok kitűnő eredménnyel képviseltettek különböző hazai és magyarországi versenyeken. Részt vettek az ETDK-án és lehetőségük volt neves hazai és külföldi&nbsp;előadók képzésein tanulni.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2009-2010-es tanévben a GTK tagok kitűnő eredménnyel képviseltettek különböző hazai és magyarországi versenyeken. Részt vettek az ETDK-án és lehetőségük volt neves hazai és külföldi előadók képzésein tanulni. </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>“Dr. Papp László” Számviteli Esettanulmány Verseny:</strong><br />\\r\\nBarok István, Birton Réka, Laczkó Dénes és Vincze Tamás - II. hely<br />\\r\\nFarkas Csongor és Szőcs Kinga Beáta - <strong>részt vettek</strong></p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2009, Budapest:</strong><br />\\r\\nBirton Réka és Laczkó Dénes - <strong>III. hely</strong></p>\\r\\n\\r\\n<p><strong>Kolozsvári Pénzügyi Esettanulmány Verseny:</strong><br />\\r\\nLakatos Éva -<strong> II. hely</strong><br />\\r\\nBirton Réka, Laczkó Dénes, Szakács Szilárd és Vincze Tamás - <strong>dícséret</strong><br />\\r\\nDorner Boglárka, Erdély Attila, Farkas Csongor és Szőcs Kinga Beáta - <strong>részt vettek</strong></p>\\r\\n\\r\\n<p><strong>XI. Országos Esettanulmány Verseny:</strong><br />\\r\\nBarok István, Birton Réka, Laczkó Dénes és Vincze Tamás</p>\\r\\n\\r\\n<p><strong>Országos Pénzügyi Esettanulmányi Verseny:</strong><br />\\r\\nBarok István és Birton Réka - <strong>III. hely</strong></p>\\r\\n\\r\\n<p><strong>Kolozsvári Menedzsment Esettanulmány Verseny:</strong><br />\\r\\nBarok István, Birton Réka, Laczkó Dénes és Vincze Tamás - <strong>I. hely</strong><br />\\r\\nRácz Béla-Gergely - <strong>II. hely</strong><br />\\r\\nSzakács Szilárd és Székely Krisztián - <strong>III. hely</strong><br />\\r\\nDorner Boglárka, Erdély Attila, Farkas Csongor, Szőcs Kinga Beáta és Lakatos Éva - <strong>dícséret</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>“Dr. Papp László” Számviteli Esettanulmány Verseny:</strong><br />\\nBarok István, Birton Réka, Laczkó Dénes és Vincze Tamás - II. hely<br />\\nFarkas Csongor és Szőcs Kinga Beáta - <strong>részt vettek</strong></p>\\n<p><strong>BCG Strategy Cup 2009, Budapest:</strong><br />\\nBirton Réka és Laczkó Dénes - <strong>III. hely</strong></p>\\n<p><strong>Kolozsvári Pénzügyi Esettanulmány Verseny:</strong><br />\\nLakatos Éva -<strong> II. hely</strong><br />\\nBirton Réka, Laczkó Dénes, Szakács Szilárd és Vincze Tamás - <strong>dícséret</strong><br />\\nDorner Boglárka, Erdély Attila, Farkas Csongor és Szőcs Kinga Beáta - <strong>részt vettek</strong></p>\\n<p><strong>XI. Országos Esettanulmány Verseny:</strong><br />\\nBarok István, Birton Réka, Laczkó Dénes és Vincze Tamás</p>\\n<p><strong>Országos Pénzügyi Esettanulmányi Verseny:</strong><br />\\nBarok István és Birton Réka - <strong>III. hely</strong></p>\\n<p><strong>Kolozsvári Menedzsment Esettanulmány Verseny:</strong><br />\\nBarok István, Birton Réka, Laczkó Dénes és Vincze Tamás - <strong>I. hely</strong><br />\\nRácz Béla-Gergely - <strong>II. hely</strong><br />\\nSzakács Szilárd és Székely Krisztián - <strong>III. hely</strong><br />\\nDorner Boglárka, Erdély Attila, Farkas Csongor, Szőcs Kinga Beáta és Lakatos Éva - <strong>dícséret</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Marketing-Menedzsment szekció:</strong></p>\\r\\n\\r\\n<p>Laczkó Dénes, Vincze Tamás:&nbsp;<em>Búzától a kenyérig – stratégiai döntési&nbsp;pontok a hazai gabonatermékpályákon -</em>&nbsp;<strong>I. díj</strong></p>\\r\\n\\r\\n<p><strong style=\\"line-height:1.6\\">Dorner Boglárka-Tamara, Erdély Attila, Szőcs Kinga Beáta:&nbsp;</strong><em>New Public Management – avagy menedzsment technikák alkalmazása a&nbsp;középiskolák vezetésében -&nbsp;</em><strong><span style=\\"line-height:1.6\\">dícséret</span></strong></p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Marketing-Menedzsment szekció:</strong></p>\\n<p>Laczkó Dénes, Vincze Tamás: <em>Búzától a kenyérig – stratégiai döntési pontok a hazai gabonatermékpályákon -</em> <strong>I. díj</strong></p>\\n<p><strong>Dorner Boglárka-Tamara, Erdély Attila, Szőcs Kinga Beáta: </strong><em>New Public Management – avagy menedzsment technikák alkalmazása a középiskolák vezetésében - </em><strong>dícséret</strong></p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>dr. Heidrich Balázs</strong>, tanácsadó, Human Telex Consulting<br />\\r\\n<strong>Zala Ákos</strong>, tanácsadó, Human Telex Consulting<br />\\r\\n<strong>dr. Ákos Tamás</strong>, az MKB Bank Retail üzletágának ügyvezető igazgatója<br />\\r\\n<strong>Záboji Péter</strong>, European Entrepreneurship Foundation elnöke<br />\\r\\n<strong>dr. Kádár Magor</strong>, adjunktus, BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>dr. Heidrich Balázs</strong>, tanácsadó, Human Telex Consulting<br /><strong>Zala Ákos</strong>, tanácsadó, Human Telex Consulting<br /><strong>dr. Ákos Tamás</strong>, az MKB Bank Retail üzletágának ügyvezető igazgatója<br /><strong>Záboji Péter</strong>, European Entrepreneurship Foundation elnöke<br /><strong>dr. Kádár Magor</strong>, adjunktus, BBTE</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1421685990\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'735\',
        \'source\' => \'node/725\',
        \'alias\' => \'2009-2010-tevékenységi-beszámoló\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'977\',
      \'uid\' => \'3\',
      \'title\' => \'Molnár Bálint\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7982be19-a1f1-45ee-a37a-3ccafc6c950c\',
      \'nid\' => \'977\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226396\',
      \'changed\' => \'1423226396\',
      \'tnid\' => \'694\',
      \'translate\' => \'0\',
      \'uuid\' => \'8292f639-f7ea-4a38-a008-d8b8236ff050\',
      \'revision_timestamp\' => \'1423226396\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>manager de maketing şi comunicaţii la EIT ICT Labs Budapest</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>manager de maketing şi comunicaţii la EIT ICT Labs Budapest</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'562\',
            \'uid\' => \'3\',
            \'filename\' => \'MolnarB Cropped.jpg\',
            \'uri\' => \'public://MolnarB Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25231\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853559\',
            \'type\' => \'image\',
            \'uuid\' => \'0e215cd4-38ca-402c-bf7b-a4d470d31a1f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Molnár Bálint\',
            \'format\' => NULL,
            \'safe_value\' => \'Molnár Bálint\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Molnár Bálint\',
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
      \'last_comment_timestamp\' => \'1423226396\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'988\',
        \'source\' => \'node/977\',
        \'alias\' => \'molnár-bálint\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1159\',
      \'uid\' => \'3\',
      \'title\' => \'Tasnádi Márta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c3d742df-ce71-41ca-8287-f7edf66fed11\',
      \'nid\' => \'1159\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423231036\',
      \'changed\' => \'1423231036\',
      \'tnid\' => \'723\',
      \'translate\' => \'0\',
      \'uuid\' => \'830a605e-b5c0-4273-97e4-f4ed9810119d\',
      \'revision_timestamp\' => \'1423231036\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Highschool alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Highschool alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'585\',
            \'uid\' => \'3\',
            \'filename\' => \'Tasnádi Cropped.jpg\',
            \'uri\' => \'public://Tasnádi Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32983\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855544\',
            \'type\' => \'image\',
            \'uuid\' => \'134ba7d5-2418-46fc-b6a5-6d96cb5bfb55\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Tasnádi Márta\',
            \'format\' => NULL,
            \'safe_value\' => \'Tasnádi Márta\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Tasnádi Márta\',
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
      \'last_comment_timestamp\' => \'1423231036\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1170\',
        \'source\' => \'node/1159\',
        \'alias\' => \'tasnádi-márta\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1152\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Zsuzsanna\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f959df0b-9eb2-46c6-8be8-450a8178ce49\',
      \'nid\' => \'1152\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230927\',
      \'changed\' => \'1423230927\',
      \'tnid\' => \'720\',
      \'translate\' => \'0\',
      \'uuid\' => \'836de5bb-7696-4634-8207-757aff057f48\',
      \'revision_timestamp\' => \'1423230927\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Highschool alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Highschool alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'582\',
            \'uid\' => \'3\',
            \'filename\' => \'NagyZs Cropped.jpg\',
            \'uri\' => \'public://NagyZs Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'29097\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855475\',
            \'type\' => \'image\',
            \'uuid\' => \'f7a59946-adff-4e9b-81c5-4045c939ee55\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Nagy Zsuzsanna\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Zsuzsanna\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Zsuzsanna\',
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
      \'last_comment_timestamp\' => \'1423230927\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1163\',
        \'source\' => \'node/1152\',
        \'alias\' => \'nagy-zsuzsanna\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'683\',
      \'uid\' => \'3\',
      \'title\' => \'Takács József\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c909c62c-de1f-46f7-8e60-2a20208b76f0\',
      \'nid\' => \'683\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421677417\',
      \'changed\' => \'1421677417\',
      \'tnid\' => \'683\',
      \'translate\' => \'0\',
      \'uuid\' => \'84380b9e-47e1-4eb9-85ee-1d928b36b502\',
      \'revision_timestamp\' => \'1421677417\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>a Vodafone Hungary stratégiai igazgatója</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>a Vodafone Hungary stratégiai igazgatója</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'280\',
            \'uid\' => \'3\',
            \'filename\' => \'jozsef takacs.jpg\',
            \'uri\' => \'public://jozsef takacs.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25269\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421677417\',
            \'type\' => \'image\',
            \'uuid\' => \'abcf4418-da2c-4f16-965c-51927d84af9a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Takács József\',
            \'format\' => NULL,
            \'safe_value\' => \'Takács József\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Takács József\',
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
      \'last_comment_timestamp\' => \'1421677417\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'693\',
        \'source\' => \'node/683\',
        \'alias\' => \'takács-józsef\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1155\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Réka\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7d6779f4-4328-43f4-8c3b-62e33ca0534c\',
      \'nid\' => \'1155\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230958\',
      \'changed\' => \'1423230958\',
      \'tnid\' => \'719\',
      \'translate\' => \'0\',
      \'uuid\' => \'87678081-d0fc-4493-8c79-69d9053a5d6d\',
      \'revision_timestamp\' => \'1423230958\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni - Program pentru Liceeni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni - Program pentru Liceeni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'318\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy_Reka.jpg\',
            \'uri\' => \'public://Nagy_Reka.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'36369\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421680443\',
            \'type\' => \'image\',
            \'uuid\' => \'56fcd732-7a60-4d7a-8b03-f93489faf756\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'241\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'241\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Nagy Réka\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Réka\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Réka\',
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
      \'last_comment_timestamp\' => \'1423230958\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1166\',
        \'source\' => \'node/1155\',
        \'alias\' => \'nagy-réka\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1182\',
      \'uid\' => \'3\',
      \'title\' => \'2009-2010\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'924b0e51-6bf8-45da-b21c-5836bf74faab\',
      \'nid\' => \'1182\',
      \'type\' => \'result\',
      \'language\' => \'en\',
      \'created\' => \'1423494436\',
      \'changed\' => \'1424263243\',
      \'tnid\' => \'725\',
      \'translate\' => \'0\',
      \'uuid\' => \'8c15406f-4ca8-4b73-add6-74cdafe1ab49\',
      \'revision_timestamp\' => \'1424263243\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>In the 2009/2010 academic year members represented the GTK at numerous competitions, with great results, and also had the occasion to participate at different trainings.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>In the 2009/2010 academic year members represented the GTK at numerous competitions, with great results, and also had the occasion to participate at different trainings.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>II. Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó Case Study Competition in&nbsp;Accounting, 2009:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Dénes Laczkó and&nbsp;Tamás Vincze - <strong>II. prize</strong></p>\\r\\n\\r\\n<p><strong>Competed: </strong>Csongor Farkas and Kinga Beáta&nbsp;Szőcs</p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2009, Budapest:</strong></p>\\r\\n\\r\\n<p>Birton Réka and Laczkó Dénes - <strong>III. prize</strong></p>\\r\\n\\r\\n<p><strong>The Financial Case Study Competition:</strong></p>\\r\\n\\r\\n<p>Éva Lakatos - <strong>II. prize</strong></p>\\r\\n\\r\\n<p>Réka Birton, Dénes Laczkó, Szilárd Szakács&nbsp;and Tamás Vincze - <strong>diplomas of mention</strong></p>\\r\\n\\r\\n<p><strong>Competed: </strong>Boglárka Dorner, Attila Erdély,&nbsp;Csongor Farkas and Kinga Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>11th National Case Study Competition, 2010:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Dénes Laczkó and&nbsp;Tamás Vincze</p>\\r\\n\\r\\n<p><strong>National Financial Case Study Management:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton - <strong>III. prize</strong></p>\\r\\n\\r\\n<p><strong>Case Study Competition in Cluj-Napoca 2009:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Dénes Laczkó and&nbsp;Tamás Vincze - <strong>I. prize</strong></p>\\r\\n\\r\\n<p>Béla-Gergely Rácz - <strong>II. prize</strong></p>\\r\\n\\r\\n<p>Szilárd Szakács and Krisztián Székely - <strong>III. prize</strong></p>\\r\\n\\r\\n<p>Boglárka Dorner, Attila Erdély, Csongor&nbsp;Farkas, Kinga Beáta Szőcs and Éva Lakatos -&nbsp;<strong>diplomas of mention</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>II. Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó Case Study Competition in Accounting, 2009:</strong></p>\\n<p>István Barok, Réka Birton, Dénes Laczkó and Tamás Vincze - <strong>II. prize</strong></p>\\n<p><strong>Competed: </strong>Csongor Farkas and Kinga Beáta Szőcs</p>\\n<p><strong>BCG Strategy Cup 2009, Budapest:</strong></p>\\n<p>Birton Réka and Laczkó Dénes - <strong>III. prize</strong></p>\\n<p><strong>The Financial Case Study Competition:</strong></p>\\n<p>Éva Lakatos - <strong>II. prize</strong></p>\\n<p>Réka Birton, Dénes Laczkó, Szilárd Szakács and Tamás Vincze - <strong>diplomas of mention</strong></p>\\n<p><strong>Competed: </strong>Boglárka Dorner, Attila Erdély, Csongor Farkas and Kinga Beáta Szőcs</p>\\n<p><strong>11th National Case Study Competition, 2010:</strong></p>\\n<p>István Barok, Réka Birton, Dénes Laczkó and Tamás Vincze</p>\\n<p><strong>National Financial Case Study Management:</strong></p>\\n<p>István Barok, Réka Birton - <strong>III. prize</strong></p>\\n<p><strong>Case Study Competition in Cluj-Napoca 2009:</strong></p>\\n<p>István Barok, Réka Birton, Dénes Laczkó and Tamás Vincze - <strong>I. prize</strong></p>\\n<p>Béla-Gergely Rácz - <strong>II. prize</strong></p>\\n<p>Szilárd Szakács and Krisztián Székely - <strong>III. prize</strong></p>\\n<p>Boglárka Dorner, Attila Erdély, Csongor Farkas, Kinga Beáta Szőcs and Éva Lakatos - <strong>diplomas of mention</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Marketing-Management section:</strong></p>\\r\\n\\r\\n<p>Dénes Laczkó, Tamás Vincze:<strong>&nbsp;</strong><em>Form wheat to bread – strategic decisionpoints in the domestic grain &nbsp;industry</em> -&nbsp;<strong>I. prize</strong></p>\\r\\n\\r\\n<p>Boglárka-Tamara Dorner, Attila Erdély,Kinga Beáta Szőcs:&nbsp;<em>New Public Management – applied management techniques in high-school&nbsp;administration -&nbsp;</em><strong>&nbsp;diplomas of mention</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Marketing-Management section:</strong></p>\\n<p>Dénes Laczkó, Tamás Vincze:<strong> </strong><em>Form wheat to bread – strategic decisionpoints in the domestic grain  industry</em> - <strong>I. prize</strong></p>\\n<p>Boglárka-Tamara Dorner, Attila Erdély,Kinga Beáta Szőcs: <em>New Public Management – applied management techniques in high-school administration - </em><strong> diplomas of mention</strong></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Á</strong><strong>kos Zala, </strong>managing director, Human Telex Consulting</p>\\r\\n\\r\\n<p><strong>Bal</strong><strong>á</strong><strong>zs Heidrich, </strong>business consultant, Human Telex Consulting</p>\\r\\n\\r\\n<p><strong>Magor K</strong><strong>á</strong><strong>d</strong><strong>á</strong><strong>r, </strong>assistant professor, Babeş-Bolyai University</p>\\r\\n\\r\\n<p><strong>P</strong><strong>é</strong><strong>ter Z</strong><strong>á</strong><strong>boji, </strong>president, European Entrepreneurship Foundation</p>\\r\\n\\r\\n<p><strong>Tam</strong><strong>á</strong><strong>s </strong><strong>Á</strong><strong>kos, </strong>managing director, MKB Bank</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Á</strong><strong>kos Zala, </strong>managing director, Human Telex Consulting</p>\\n<p><strong>Bal</strong><strong>á</strong><strong>zs Heidrich, </strong>business consultant, Human Telex Consulting</p>\\n<p><strong>Magor K</strong><strong>á</strong><strong>d</strong><strong>á</strong><strong>r, </strong>assistant professor, Babeş-Bolyai University</p>\\n<p><strong>P</strong><strong>é</strong><strong>ter Z</strong><strong>á</strong><strong>boji, </strong>president, European Entrepreneurship Foundation</p>\\n<p><strong>Tam</strong><strong>á</strong><strong>s </strong><strong>Á</strong><strong>kos, </strong>managing director, MKB Bank</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1423494436\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1193\',
        \'source\' => \'node/1182\',
        \'alias\' => \'2009-2010\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'989\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0f85ddb6-5270-472a-80e7-9cac26b0127c\',
      \'nid\' => \'989\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226787\',
      \'changed\' => \'1423226787\',
      \'tnid\' => \'701\',
      \'translate\' => \'0\',
      \'uuid\' => \'920ed582-782d-4987-9e27-5d946596a85e\',
      \'revision_timestamp\' => \'1423226787\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>CEO,&nbsp;Viasat Hungária Zrt.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>CEO, Viasat Hungária Zrt.</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'564\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo_andris Cropped.jpg\',
            \'uri\' => \'public://szabo_andris Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25579\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853632\',
            \'type\' => \'image\',
            \'uuid\' => \'868124a7-8249-4103-8bc7-3d8603b95888\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Szabó András\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
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
      \'last_comment_timestamp\' => \'1423226787\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1000\',
        \'source\' => \'node/989\',
        \'alias\' => \'szabó-andrás\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1050\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Hunor Györk\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b9b83638-0139-44fb-a4b0-361e966d2468\',
      \'nid\' => \'1050\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423229674\',
      \'changed\' => \'1423229674\',
      \'tnid\' => \'902\',
      \'translate\' => \'0\',
      \'uuid\' => \'971af2ab-cbd9-4541-983e-c6b65c25e9ad\',
      \'revision_timestamp\' => \'1423229674\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Hunor,&nbsp;3 év mérnöki képzés után kezdett el tanulni a jelenlegi szakirányon, ahol sikeresen felvételizett a GTK-ba, annak érdekében, hogy a lehető legjobb körülmények között kapja a lehető legjobb képzést.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Hunor, 3 év mérnöki képzés után kezdett el tanulni a jelenlegi szakirányon, ahol sikeresen felvételizett a GTK-ba, annak érdekében, hogy a lehető legjobb körülmények között kapja a lehető legjobb képzést.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'522\',
            \'uid\' => \'3\',
            \'filename\' => \'nagyhunor Cropped.jpg\',
            \'uri\' => \'public://nagyhunor Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20593\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848048\',
            \'type\' => \'image\',
            \'uuid\' => \'ff0c7d4e-c16a-4782-b61d-a99996e2269f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2014-: BBTE KGTK, egyetemi kézpés, magyar tagozat,&nbsp; Menedzsment</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2014-: BBTE KGTK, egyetemi kézpés, magyar tagozat,  Menedzsment</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Nagy Hunor Györk\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Hunor Györk\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Hunor Györk\',
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
      \'last_comment_timestamp\' => \'1423229674\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1061\',
        \'source\' => \'node/1050\',
        \'alias\' => \'nagy-hunor-györk\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1116\',
      \'uid\' => \'3\',
      \'title\' => \'Német Hunor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8af05121-0a72-4b04-8919-6fe301accabf\',
      \'nid\' => \'1116\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230446\',
      \'changed\' => \'1423230446\',
      \'tnid\' => \'654\',
      \'translate\' => \'0\',
      \'uuid\' => \'9735d544-b2ca-4767-8569-ad3468e46541\',
      \'revision_timestamp\' => \'1423230446\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'251\',
            \'uid\' => \'3\',
            \'filename\' => \'Nemet Hunor.jpg\',
            \'uri\' => \'public://Nemet Hunor.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30731\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675533\',
            \'type\' => \'image\',
            \'uuid\' => \'45b70dcd-18c9-4233-85f6-ea0a6d7b7950\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'188\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'188\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Menedzsment - BSc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Menedzsment - BSc</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Német Hunor\',
            \'format\' => NULL,
            \'safe_value\' => \'Német Hunor\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
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
      \'last_comment_timestamp\' => \'1423230446\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1127\',
        \'source\' => \'node/1116\',
        \'alias\' => \'német-hunor\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1132\',
      \'uid\' => \'3\',
      \'title\' => \'Szőcs Kinga\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'123a4bdc-aba4-4b71-a910-7c1d143c387f\',
      \'nid\' => \'1132\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230574\',
      \'changed\' => \'1423230574\',
      \'tnid\' => \'662\',
      \'translate\' => \'0\',
      \'uuid\' => \'97f2916e-74dc-4b8a-9fb5-27dc612a6570\',
      \'revision_timestamp\' => \'1423230574\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Bonafarm Zrt., Gazdasági Vezetőképző Program (Projekt menedzser) - Budapest</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Bonafarm Zrt., Gazdasági Vezetőképző Program (Projekt menedzser) - Budapest</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Szabadidejében sportol, olvas, színházba jár és finomakat főz, süt (legalább is mások véleménye alapján :D).<br />\\r\\nKinga úgy gondolja, hogy a GTK-ban végzett kitartó munka és kihívások jelentősen segítették nemcsak az egyetemi feladatok hatékonyabb elvégzésében, hanem jelenlegi munkája során is stabil alapot és előnyt jelentenek. Ezekre építve pedig sokkal könnyebb a fejlődés, mint a nulláról kezdeni. Mindezek mellett, Kinga számára, ami a legfontosabb, a GTK megtanít kitartó csapatjátékos lenni.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Mindezekért és a nagyszerű közösségért, amelyet a GTK tagjaként ismert meg és jelenleg is része az életének, ha újrakezdené az egyetemet, a GTK-ba mindenképpen jelentkezne.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Szabadidejében sportol, olvas, színházba jár és finomakat főz, süt (legalább is mások véleménye alapján :D).<br />\\nKinga úgy gondolja, hogy a GTK-ban végzett kitartó munka és kihívások jelentősen segítették nemcsak az egyetemi feladatok hatékonyabb elvégzésében, hanem jelenlegi munkája során is stabil alapot és előnyt jelentenek. Ezekre építve pedig sokkal könnyebb a fejlődés, mint a nulláról kezdeni. Mindezek mellett, Kinga számára, ami a legfontosabb, a GTK megtanít kitartó csapatjátékos lenni.</p>\\n<p class=\\"rtejustify\\">Mindezekért és a nagyszerű közösségért, amelyet a GTK tagjaként ismert meg és jelenleg is része az életének, ha újrakezdené az egyetemet, a GTK-ba mindenképpen jelentkezne.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'540\',
            \'uid\' => \'3\',
            \'filename\' => \'Szocs_Kinga Cropped.jpg\',
            \'uri\' => \'public://Szocs_Kinga Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'28220\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421850617\',
            \'type\' => \'image\',
            \'uuid\' => \'8ded5e1f-ff1a-4990-8f70-d15ccd38c4f3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2008-2011: BBTE KGTK, egyetemi képzés, magyar tagozat, Menedzsment szakirány</p>\\r\\n\\r\\n<p>2009-2010: PTE GTK, egyetemi képzés, Erasmus ösztöndíj</p>\\r\\n\\r\\n<p>2011-2013: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalkozás menedzsment szakirány</p>\\r\\n\\r\\n<p>2012-2013: BCE GTK, mesteri részképzés, Logisztika szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2008-2011: BBTE KGTK, egyetemi képzés, magyar tagozat, Menedzsment szakirány</p>\\n<p>2009-2010: PTE GTK, egyetemi képzés, Erasmus ösztöndíj</p>\\n<p>2011-2013: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalkozás menedzsment szakirány</p>\\n<p>2012-2013: BCE GTK, mesteri részképzés, Logisztika szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Szőcs Kinga\',
            \'format\' => NULL,
            \'safe_value\' => \'Szőcs Kinga\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Szőcs Kinga\',
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
      \'last_comment_timestamp\' => \'1423230574\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1143\',
        \'source\' => \'node/1132\',
        \'alias\' => \'szőcs-kinga\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1052\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Loránd\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'82f1aa65-bde4-477d-a6e6-1e8364fa20b7\',
      \'nid\' => \'1052\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423229729\',
      \'changed\' => \'1423229729\',
      \'tnid\' => \'901\',
      \'translate\' => \'0\',
      \'uuid\' => \'9863e62b-7910-4e56-b1f6-980c96309714\',
      \'revision_timestamp\' => \'1423229729\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'523\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy Loránd Cropped.jpg\',
            \'uri\' => \'public://Nagy Loránd Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20783\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848080\',
            \'type\' => \'image\',
            \'uuid\' => \'4c5ffdb7-4716-4f48-aef2-87e05e1acf07\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Nagy Loránd\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Loránd\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1423229729\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1063\',
        \'source\' => \'node/1052\',
        \'alias\' => \'nagy-loránd\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1055\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó S. Zsolt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'869dace0-4174-4434-bdc2-0efa2f677ccb\',
      \'nid\' => \'1055\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423229765\',
      \'changed\' => \'1423229765\',
      \'tnid\' => \'903\',
      \'translate\' => \'0\',
      \'uuid\' => \'9b56e00b-eee1-4f03-8f61-9a1fb891b74b\',
      \'revision_timestamp\' => \'1423229765\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'525\',
            \'uid\' => \'3\',
            \'filename\' => \'szabó_zsolt Cropped.jpg\',
            \'uri\' => \'public://szabó_zsolt Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'16642\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848087\',
            \'type\' => \'image\',
            \'uuid\' => \'b328c9b8-b0fa-4a20-96bb-5156bc4883c9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Szabó S. Zsolt\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó S. Zsolt\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1423229765\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1066\',
        \'source\' => \'node/1055\',
        \'alias\' => \'szabó-s-zsolt\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'902\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Hunor Györk\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'17d36543-4719-4efb-8d26-327f09da2188\',
      \'nid\' => \'902\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421829179\',
      \'changed\' => \'1421848048\',
      \'tnid\' => \'902\',
      \'translate\' => \'0\',
      \'uuid\' => \'9bf80e2e-68b4-4f37-a65f-e0ca4d9a2ee1\',
      \'revision_timestamp\' => \'1421848048\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Hunor,&nbsp;3 év mérnöki képzés után kezdett el tanulni a jelenlegi szakirányon, ahol sikeresen felvételizett a GTK-ba, annak érdekében, hogy a lehető legjobb körülmények között kapja a lehető legjobb képzést.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Hunor, 3 év mérnöki képzés után kezdett el tanulni a jelenlegi szakirányon, ahol sikeresen felvételizett a GTK-ba, annak érdekében, hogy a lehető legjobb körülmények között kapja a lehető legjobb képzést.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'522\',
            \'uid\' => \'3\',
            \'filename\' => \'nagyhunor Cropped.jpg\',
            \'uri\' => \'public://nagyhunor Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20593\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848048\',
            \'type\' => \'image\',
            \'uuid\' => \'ff0c7d4e-c16a-4782-b61d-a99996e2269f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2014-: BBTE KGTK, egyetemi kézpés, magyar tagozat,&nbsp; Menedzsment</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2014-: BBTE KGTK, egyetemi kézpés, magyar tagozat,  Menedzsment</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy Hunor Györk\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Hunor Györk\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Hunor Györk\',
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
      \'last_comment_timestamp\' => \'1421829179\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'913\',
        \'source\' => \'node/902\',
        \'alias\' => \'nagy-hunor-györk\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1127\',
      \'uid\' => \'3\',
      \'title\' => \'Szőcs Kinga\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6fc6f0ed-c30d-4d80-9caf-5153be50e9ee\',
      \'nid\' => \'1127\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230541\',
      \'changed\' => \'1423230541\',
      \'tnid\' => \'662\',
      \'translate\' => \'0\',
      \'uuid\' => \'9d87f728-bdb0-4ec6-849c-0d3e3eb41f2c\',
      \'revision_timestamp\' => \'1423230541\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Bonafarm Zrt., Gazdasági Vezetőképző Program (Projekt menedzser) - Budapest</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Bonafarm Zrt., Gazdasági Vezetőképző Program (Projekt menedzser) - Budapest</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Szabadidejében sportol, olvas, színházba jár és finomakat főz, süt (legalább is mások véleménye alapján :D).<br />\\r\\nKinga úgy gondolja, hogy a GTK-ban végzett kitartó munka és kihívások jelentősen segítették nemcsak az egyetemi feladatok hatékonyabb elvégzésében, hanem jelenlegi munkája során is stabil alapot és előnyt jelentenek. Ezekre építve pedig sokkal könnyebb a fejlődés, mint a nulláról kezdeni. Mindezek mellett, Kinga számára, ami a legfontosabb, a GTK megtanít kitartó csapatjátékos lenni.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Mindezekért és a nagyszerű közösségért, amelyet a GTK tagjaként ismert meg és jelenleg is része az életének, ha újrakezdené az egyetemet, a GTK-ba mindenképpen jelentkezne.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Szabadidejében sportol, olvas, színházba jár és finomakat főz, süt (legalább is mások véleménye alapján :D).<br />\\nKinga úgy gondolja, hogy a GTK-ban végzett kitartó munka és kihívások jelentősen segítették nemcsak az egyetemi feladatok hatékonyabb elvégzésében, hanem jelenlegi munkája során is stabil alapot és előnyt jelentenek. Ezekre építve pedig sokkal könnyebb a fejlődés, mint a nulláról kezdeni. Mindezek mellett, Kinga számára, ami a legfontosabb, a GTK megtanít kitartó csapatjátékos lenni.</p>\\n<p class=\\"rtejustify\\">Mindezekért és a nagyszerű közösségért, amelyet a GTK tagjaként ismert meg és jelenleg is része az életének, ha újrakezdené az egyetemet, a GTK-ba mindenképpen jelentkezne.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'540\',
            \'uid\' => \'3\',
            \'filename\' => \'Szocs_Kinga Cropped.jpg\',
            \'uri\' => \'public://Szocs_Kinga Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'28220\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421850617\',
            \'type\' => \'image\',
            \'uuid\' => \'8ded5e1f-ff1a-4990-8f70-d15ccd38c4f3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2008-2011: BBTE KGTK, egyetemi képzés, magyar tagozat, Menedzsment szakirány</p>\\r\\n\\r\\n<p>2009-2010: PTE GTK, egyetemi képzés, Erasmus ösztöndíj</p>\\r\\n\\r\\n<p>2011-2013: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalkozás menedzsment szakirány</p>\\r\\n\\r\\n<p>2012-2013: BCE GTK, mesteri részképzés, Logisztika szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2008-2011: BBTE KGTK, egyetemi képzés, magyar tagozat, Menedzsment szakirány</p>\\n<p>2009-2010: PTE GTK, egyetemi képzés, Erasmus ösztöndíj</p>\\n<p>2011-2013: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalkozás menedzsment szakirány</p>\\n<p>2012-2013: BCE GTK, mesteri részképzés, Logisztika szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Szőcs Kinga\',
            \'format\' => NULL,
            \'safe_value\' => \'Szőcs Kinga\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Szőcs Kinga\',
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
      \'last_comment_timestamp\' => \'1423230541\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1138\',
        \'source\' => \'node/1127\',
        \'alias\' => \'szőcs-kinga\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'904\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Rita\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'75237b84-7e17-483e-bdf8-13fd8bd52c77\',
      \'nid\' => \'904\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421829269\',
      \'changed\' => \'1421848090\',
      \'tnid\' => \'904\',
      \'translate\' => \'0\',
      \'uuid\' => \'9fb9edfe-4d70-4bbb-8dd1-b3c32e81069a\',
      \'revision_timestamp\' => \'1421848090\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'526\',
            \'uid\' => \'3\',
            \'filename\' => \'SzékelyRita Cropped.jpg\',
            \'uri\' => \'public://SzékelyRita Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'44330\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848090\',
            \'type\' => \'image\',
            \'uuid\' => \'372fce4b-ee57-4bba-aded-ffc4404f688b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Székely Rita\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Rita\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Székely Rita\',
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
      \'last_comment_timestamp\' => \'1421829269\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'915\',
        \'source\' => \'node/904\',
        \'alias\' => \'székely-rita\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'721\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó Júlia\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'901d7b70-5626-4c84-98e7-efae23a64d74\',
      \'nid\' => \'721\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421680528\',
      \'changed\' => \'1421855489\',
      \'tnid\' => \'721\',
      \'translate\' => \'0\',
      \'uuid\' => \'9ff63307-9029-4d86-a8a4-ad5ce16f0745\',
      \'revision_timestamp\' => \'1421855489\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Középiskolás Program Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Középiskolás Program Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'583\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo Cropped.jpg\',
            \'uri\' => \'public://szabo Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34950\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855489\',
            \'type\' => \'image\',
            \'uuid\' => \'0b570aaa-bc44-47c1-9624-05ac76d81c41\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szabó Júlia\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó Júlia\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Szabó Júlia\',
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
      \'last_comment_timestamp\' => \'1421680528\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'731\',
        \'source\' => \'node/721\',
        \'alias\' => \'szabó-júlia\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'995\',
      \'uid\' => \'3\',
      \'title\' => \'Tombor András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1ada5c6d-1480-4fa4-bea2-8e345d507aa3\',
      \'nid\' => \'995\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226936\',
      \'changed\' => \'1423226936\',
      \'tnid\' => \'703\',
      \'translate\' => \'0\',
      \'uuid\' => \'a0c85f1c-3133-4576-a5f5-7d17cb33ed37\',
      \'revision_timestamp\' => \'1423226936\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>the founder and president of Mathias Corvinus Collegium</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>the founder and president of Mathias Corvinus Collegium</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'567\',
            \'uid\' => \'3\',
            \'filename\' => \'tombor-andrás-kiemelt Cropped.jpg\',
            \'uri\' => \'public://tombor-andrás-kiemelt Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25391\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853749\',
            \'type\' => \'image\',
            \'uuid\' => \'768a3d12-881d-4f19-95c6-db94ede8c6b9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Tombor András\',
            \'format\' => NULL,
            \'safe_value\' => \'Tombor András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Tombor András\',
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
      \'last_comment_timestamp\' => \'1423226936\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1006\',
        \'source\' => \'node/995\',
        \'alias\' => \'tombor-andrás\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'697\',
      \'uid\' => \'3\',
      \'title\' => \'Záboji Péter\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b838de4e-57ac-4938-bc52-79403fb6f830\',
      \'nid\' => \'697\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421677933\',
      \'changed\' => \'1421853780\',
      \'tnid\' => \'697\',
      \'translate\' => \'0\',
      \'uuid\' => \'a13d6559-3041-4271-909a-8ed6aafb3fac\',
      \'revision_timestamp\' => \'1421853780\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>elnök, European Entrepreneurship Foundation</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>elnök, European Entrepreneurship Foundation</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'569\',
            \'uid\' => \'3\',
            \'filename\' => \'Peter B Zaboji  Cropped.jpg\',
            \'uri\' => \'public://Peter B Zaboji  Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30452\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853780\',
            \'type\' => \'image\',
            \'uuid\' => \'00859df5-41bc-41dd-89ef-0f9be693e683\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Záboji Péter\',
            \'format\' => NULL,
            \'safe_value\' => \'Záboji Péter\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Záboji Péter\',
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
      \'last_comment_timestamp\' => \'1421677933\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'707\',
        \'source\' => \'node/697\',
        \'alias\' => \'záboji-péter\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'728\',
      \'uid\' => \'1\',
      \'title\' => \'2012-2013 tevékenységi beszámoló\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'635303ef-36df-4f95-a785-fed126feeac3\',
      \'nid\' => \'728\',
      \'type\' => \'result\',
      \'language\' => \'hu\',
      \'created\' => \'1421690241\',
      \'changed\' => \'1424262330\',
      \'tnid\' => \'728\',
      \'translate\' => \'0\',
      \'uuid\' => \'a4600966-78d6-4d26-8088-85e162ef50bc\',
      \'revision_timestamp\' => \'1424262330\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A tagok a 2012-2013-as tanévben 11 esettanulmány versenyen vettek részt és 9 díjat hoztak el Kolozsvárra. A GTK tagok részt vettek az OTDK-n és az ETDK-n, ahol a három GTK alumni résztvevő mind díjazva volt valamilyen formában, ami szintúgy igaz az ETDK-ra is. Új programja a GTK-nak a Leadership training melyet a budapesti Mathias Corvinus Collegiummal közösen szervez.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A tagok a 2012-2013-as tanévben 11 esettanulmány versenyen vettek részt és 9 díjat hoztak el Kolozsvárra. A GTK tagok részt vettek az OTDK-n és az ETDK-n, ahol a három GTK alumni résztvevő mind díjazva volt valamilyen formában, ami szintúgy igaz az ETDK-ra is. Új programja a GTK-nak a Leadership training melyet a budapesti Mathias Corvinus Collegiummal közösen szervez.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>V. dr. Papp László Számvitel Esettanulmány Verseny:</strong><br />\\r\\nÁbrahám Krisztina - <strong>I. díj</strong><br />\\r\\nBaumgartner Mónika (alumni), Demeter Zselyke, Erdély Attila (alumni) - <strong>III. díj</strong><br />\\r\\nDorner Boglárka (alumni), Furdek Balázs, Salamon Ádám, Szőcs Kinga Beáta (alumni) - <strong>csoport második</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Eset 12 üzleti esettanulmány verseny:</strong><br />\\r\\nÁbrahám Krisztina, Erdély Attila (alumni), Szőcs Kinga Beáta (alumni)</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>European Case Study Competition for Consulting Clubs:</strong><br />\\r\\nÁbrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni) - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XI. Országos Pénzügyi Esettanulmány Verseny:</strong><br />\\r\\nBaumgartner Mónika (alumni), Erdély Attila (alumni), Salamon Ádám - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XII. Tímár László Tanulmányi Emlékverseny:</strong><br />\\r\\nÁbrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Rákóczi Roland - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XIV. Országos Esettanulmány Verseny:</strong><br />\\r\\nÁbrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni)</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Kolozsvári Egyetemista Esettanulmány Verseny 2013, Kolozsvár:</strong><br />\\r\\nÁbrán Csilla-Hajnalka, Kiss Alpár, Német Hunor - <strong>I. díj</strong><br />\\r\\nÁbrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Major Tamás (alumni) - <strong>II. díj</strong><br />\\r\\nCzirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kovács Anita - <strong>III. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Freshhh 2013 nemzetközi verseny:</strong><br />\\r\\nFurdek Balázs, Rákóczi Roland, Salamon Ádám - <strong>III. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>XII. Csíkszeredai Nyílt Esettanulmány Verseny:</strong><br />\\r\\nÁbrán Csilla-Hajnalka, Czirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kiss Alpár, Német Hunor, Kovács Anita, Székely Rita</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>IV. Kommunikáció és Marketing Esettanulmány Verseny:</strong><br />\\r\\nDemeter Zselyke - <strong>I. díj</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>II. Pénzügyi és Számviteli Esettanulmány Verseny:</strong><br />\\r\\nBaumgartner Mónika (alumni), Benkő Zsolt, Erdély Attila (alumni)</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>K&amp;H Diákkupa 2012 online bankszimulációs verseny:</strong><br />\\r\\nSzőcs Kinga Beáta, Rákóczi Roland</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>V. dr. Papp László Számvitel Esettanulmány Verseny:</strong><br />\\nÁbrahám Krisztina - <strong>I. díj</strong><br />\\nBaumgartner Mónika (alumni), Demeter Zselyke, Erdély Attila (alumni) - <strong>III. díj</strong><br />\\nDorner Boglárka (alumni), Furdek Balázs, Salamon Ádám, Szőcs Kinga Beáta (alumni) - <strong>csoport második</strong></p>\\n<p class=\\"rtejustify\\"><strong>Eset 12 üzleti esettanulmány verseny:</strong><br />\\nÁbrahám Krisztina, Erdély Attila (alumni), Szőcs Kinga Beáta (alumni)</p>\\n<p class=\\"rtejustify\\"><strong>European Case Study Competition for Consulting Clubs:</strong><br />\\nÁbrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni) - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>XI. Országos Pénzügyi Esettanulmány Verseny:</strong><br />\\nBaumgartner Mónika (alumni), Erdély Attila (alumni), Salamon Ádám - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>XII. Tímár László Tanulmányi Emlékverseny:</strong><br />\\nÁbrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Rákóczi Roland - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>XIV. Országos Esettanulmány Verseny:</strong><br />\\nÁbrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni)</p>\\n<p class=\\"rtejustify\\"><strong>Kolozsvári Egyetemista Esettanulmány Verseny 2013, Kolozsvár:</strong><br />\\nÁbrán Csilla-Hajnalka, Kiss Alpár, Német Hunor - <strong>I. díj</strong><br />\\nÁbrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Major Tamás (alumni) - <strong>II. díj</strong><br />\\nCzirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kovács Anita - <strong>III. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>Freshhh 2013 nemzetközi verseny:</strong><br />\\nFurdek Balázs, Rákóczi Roland, Salamon Ádám - <strong>III. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>XII. Csíkszeredai Nyílt Esettanulmány Verseny:</strong><br />\\nÁbrán Csilla-Hajnalka, Czirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kiss Alpár, Német Hunor, Kovács Anita, Székely Rita</p>\\n<p class=\\"rtejustify\\"><strong>IV. Kommunikáció és Marketing Esettanulmány Verseny:</strong><br />\\nDemeter Zselyke - <strong>I. díj</strong></p>\\n<p class=\\"rtejustify\\"><strong>II. Pénzügyi és Számviteli Esettanulmány Verseny:</strong><br />\\nBaumgartner Mónika (alumni), Benkő Zsolt, Erdély Attila (alumni)</p>\\n<p class=\\"rtejustify\\"><strong>K&amp;H Diákkupa 2012 online bankszimulációs verseny:</strong><br />\\nSzőcs Kinga Beáta, Rákóczi Roland</p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>Menedzsment szekció I. díj</strong><br />\\r\\nDemeter Zselyke - <em>Termelési rendszerek fejlesztése az üzleti stratégia prioritásai mentén</em><br />\\r\\nErdély Attila - <em>A logisztikai szolgáltatók szerepe a kelet-európai gyógyszeripari ellátási hálózatban</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Menedzsment szekció II. díj</strong><br />\\r\\nÁbrahám Krisztina, Kiss Alpár, Német Hunor Attila -<em> Stratégiaalkotás a Marso gumiabroncs-forgalmazó vállalat számára</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Menedzsment szekció III. díj</strong><br />\\r\\nÁbrahám Krisztina, Czirják Renáta Hajnalka, Guttmann Csongor, Kovács Anita&nbsp; - <em>A stratégiaalkotás folyamata. Stratégia a Dacia számára Menedzsment szekció dícséret</em><br />\\r\\nÁbrán Csilla-Hajnalka, Dombi Tünde -<em> A romániai Ford beszállítói rendszere</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Bank- és Pénzügy szekció I. díj</strong><br />\\r\\nSalamon Ádám - <em>A Vitacom vállalat által alkalmazott szállítási rendszer optimalizálása</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Bank- és Pénzügy szekció II. díj</strong><br />\\r\\nRákóczi Roland - <em>Ellátási-lánc menedzsment döntések hatása az FCF-alapú vállalatértékre</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>Menedzsment szekció I. díj</strong><br />\\nDemeter Zselyke - <em>Termelési rendszerek fejlesztése az üzleti stratégia prioritásai mentén</em><br />\\nErdély Attila - <em>A logisztikai szolgáltatók szerepe a kelet-európai gyógyszeripari ellátási hálózatban</em></p>\\n<p class=\\"rtejustify\\"><strong>Menedzsment szekció II. díj</strong><br />\\nÁbrahám Krisztina, Kiss Alpár, Német Hunor Attila -<em> Stratégiaalkotás a Marso gumiabroncs-forgalmazó vállalat számára</em></p>\\n<p class=\\"rtejustify\\"><strong>Menedzsment szekció III. díj</strong><br />\\nÁbrahám Krisztina, Czirják Renáta Hajnalka, Guttmann Csongor, Kovács Anita  - <em>A stratégiaalkotás folyamata. Stratégia a Dacia számára Menedzsment szekció dícséret</em><br />\\nÁbrán Csilla-Hajnalka, Dombi Tünde -<em> A romániai Ford beszállítói rendszere</em></p>\\n<p class=\\"rtejustify\\"><strong>Bank- és Pénzügy szekció I. díj</strong><br />\\nSalamon Ádám - <em>A Vitacom vállalat által alkalmazott szállítási rendszer optimalizálása</em></p>\\n<p class=\\"rtejustify\\"><strong>Bank- és Pénzügy szekció II. díj</strong><br />\\nRákóczi Roland - <em>Ellátási-lánc menedzsment döntések hatása az FCF-alapú vállalatértékre</em></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>Bilibók Botond</strong>, vezérigazgató, Concorde Alapkezelő Zrt<br />\\r\\n<strong>dr. David Sims</strong>, a City University London – Cass Business School professzora<br />\\r\\n<strong>Huba Eörs,</strong> ügyvezető patner, IFUA Horváth &amp; Partners<br />\\r\\n<strong>Lieb Mihály</strong>, az Autonet tulajdonosa<br />\\r\\n<strong>Szabó Levente</strong>, Takarékbank Zrt megbízott vezérigazgatója</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>Bilibók Botond</strong>, vezérigazgató, Concorde Alapkezelő Zrt<br /><strong>dr. David Sims</strong>, a City University London – Cass Business School professzora<br /><strong>Huba Eörs,</strong> ügyvezető patner, IFUA Horváth &amp; Partners<br /><strong>Lieb Mihály</strong>, az Autonet tulajdonosa<br /><strong>Szabó Levente</strong>, Takarékbank Zrt megbízott vezérigazgatója</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>9. Közép-Európai Konferencia:&nbsp;Ábrahám Krisztina (2013)</strong><br />\\r\\n<em>„Kis és közepes vállalkozások Közép-Európában” szekció</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>6th International Management Conference Managerial Challenges of the Contemporary Society:&nbsp;Szász Levente, Demeter Zselyke (2013)</strong><br />\\r\\n<em>Improving operations based on competitive priority mapping:&nbsp;a case study in the plastics industry</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>9. Közép-Európai Konferencia: Ábrahám Krisztina (2013)</strong><br /><em>„Kis és közepes vállalkozások Közép-Európában” szekció</em></p>\\n<p class=\\"rtejustify\\"><strong>6th International Management Conference Managerial Challenges of the Contemporary Society: Szász Levente, Demeter Zselyke (2013)</strong><br /><em>Improving operations based on competitive priority mapping: a case study in the plastics industry</em></p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Ábrán Csilla és Dombi Tünde @ Tipo Holding<br />\\r\\nSzékely Rita és Czirják Renáta @ MarsoRom<br />\\r\\nKovács Anita és Német Hunor @ Romchemicals<br />\\r\\nGuttmann Csongor és Kiss Alpár @ East Consulting</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ábrán Csilla és Dombi Tünde @ Tipo Holding<br />\\nSzékely Rita és Czirják Renáta @ MarsoRom<br />\\nKovács Anita és Német Hunor @ Romchemicals<br />\\nGuttmann Csongor és Kiss Alpár @ East Consulting</p>\\n",
          ),
        ),
      ),
      \'field_otdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Vállalati gazdaságtan szekció:</strong><br />\\r\\nMajor Tamás (alumni):<em> Az üzleti ötlettől a vállalkozásig. Egy sportbázis kialakításának üzleti terve, </em><strong>I. hely</strong></p>\\r\\n\\r\\n<p><strong>Vállalati pénzügyek szekció:</strong><br />\\r\\nDorner Boglárka (alumni): <em>Reálopciós döntések alkalmazása a termékciklus-modellben, </em><strong>III. hely</strong></p>\\r\\n\\r\\n<p><strong>Stratégiai- és változ(ta)tás menedzsment szekció:</strong><br />\\r\\nErdély Attila (alumni): <em>Stratégiai döntési pontok a romániai hízómarha-termékpályán</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Vállalati gazdaságtan szekció:</strong><br />\\nMajor Tamás (alumni):<em> Az üzleti ötlettől a vállalkozásig. Egy sportbázis kialakításának üzleti terve, </em><strong>I. hely</strong></p>\\n<p><strong>Vállalati pénzügyek szekció:</strong><br />\\nDorner Boglárka (alumni): <em>Reálopciós döntések alkalmazása a termékciklus-modellben, </em><strong>III. hely</strong></p>\\n<p><strong>Stratégiai- és változ(ta)tás menedzsment szekció:</strong><br />\\nErdély Attila (alumni): <em>Stratégiai döntési pontok a romániai hízómarha-termékpályán</em></p>\\n",
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
      \'last_comment_timestamp\' => \'1421690241\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'738\',
        \'source\' => \'node/728\',
        \'alias\' => \'2012-2013-tevékenységi-beszámoló\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'654\',
      \'uid\' => \'3\',
      \'title\' => \'Német Hunor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a608133d-0b12-4095-93f9-dbffa6ecec1e\',
      \'nid\' => \'654\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421675533\',
      \'changed\' => \'1421675533\',
      \'tnid\' => \'654\',
      \'translate\' => \'0\',
      \'uuid\' => \'a48a6008-bd04-40f3-a53f-1d6e09296754\',
      \'revision_timestamp\' => \'1421675533\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'251\',
            \'uid\' => \'3\',
            \'filename\' => \'Nemet Hunor.jpg\',
            \'uri\' => \'public://Nemet Hunor.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30731\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675533\',
            \'type\' => \'image\',
            \'uuid\' => \'45b70dcd-18c9-4233-85f6-ea0a6d7b7950\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'188\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'188\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Menedzsment - BSc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Menedzsment - BSc</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Német Hunor\',
            \'format\' => NULL,
            \'safe_value\' => \'Német Hunor\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
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
      \'last_comment_timestamp\' => \'1421675533\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'664\',
        \'source\' => \'node/654\',
        \'alias\' => \'német-hunor\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'985\',
      \'uid\' => \'3\',
      \'title\' => \'Răzvan Mustață\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cd5aa0cd-d16b-47df-8234-65b672bc97a8\',
      \'nid\' => \'985\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226627\',
      \'changed\' => \'1423226627\',
      \'tnid\' => \'699\',
      \'translate\' => \'0\',
      \'uuid\' => \'a4da0a3e-81b6-4d57-849a-87830640cce2\',
      \'revision_timestamp\' => \'1423226627\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>prodecan al Facultăţii de Ştiinţe Economice şi Gestiunea Afacerilor, Universitatea Babeş-Bolyai</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>prodecan al Facultăţii de Ştiinţe Economice şi Gestiunea Afacerilor, Universitatea Babeş-Bolyai</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'549\',
            \'uid\' => \'3\',
            \'filename\' => \'razvan_mustata Cropped.jpg\',
            \'uri\' => \'public://razvan_mustata Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'35032\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421852501\',
            \'type\' => \'image\',
            \'uuid\' => \'063ef6f9-6e7d-4ac1-b49b-a6871682990b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Răzvan Mustață\',
            \'format\' => NULL,
            \'safe_value\' => \'Răzvan Mustață\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Răzvan Mustață\',
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
      \'last_comment_timestamp\' => \'1423226627\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'996\',
        \'source\' => \'node/985\',
        \'alias\' => \'răzvan-mustață\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'726\',
      \'uid\' => \'1\',
      \'title\' => \'2010-2011 tevékenységi beszámoló\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bf17fab4-118a-49a6-a3ac-2310d788369d\',
      \'nid\' => \'726\',
      \'type\' => \'result\',
      \'language\' => \'hu\',
      \'created\' => \'1421687986\',
      \'changed\' => \'1424261870\',
      \'tnid\' => \'726\',
      \'translate\' => \'0\',
      \'uuid\' => \'aae47177-1232-4e20-9088-38b555b6b5bd\',
      \'revision_timestamp\' => \'1424261870\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">2010-2011-es tanévben, a GTK tagok 8 versenyen vettek részt, és mindenhonnan díjakkal tértek haza. Ezek mellett, részt vettek az ETDK-án és az OTDK-án is, kiemelkedő eredményekkel. Lehetőségük volt hazai és nemzetközi előadók képzésein és konferencián részt venni.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">2010-2011-es tanévben, a GTK tagok 8 versenyen vettek részt, és mindenhonnan díjakkal tértek haza. Ezek mellett, részt vettek az ETDK-án és az OTDK-án is, kiemelkedő eredményekkel. Lehetőségük volt hazai és nemzetközi előadók képzésein és konferencián részt venni.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Dr. Papp László Számviteli Esettanulmány Verseny, Pécs:</strong><br />\\r\\nBarok István, Birton Réka, Laczkó Dénes és Vincze Tamás – <strong>I. díj</strong><br />\\r\\nFarkas Csongor és Szőcs Kinga Beáta<em> - </em><strong>részvétel</strong></p>\\r\\n\\r\\n<p><strong>dr. Susánszky János Nemzetközi Esettanulmányi Versenyt, Miskolc:</strong><br />\\r\\nRácz Béla-Gergely - <strong>leggyakorlatiasabb megoldás különdíja</strong></p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2011, Budapest:</strong><br />\\r\\nLőrincz Márta - <strong>I. díj</strong><br />\\r\\nErdély Attila - <strong>részvétel</strong></p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2010, Budapest:</strong><br />\\r\\nSzőcs Kinga Beáta - <strong>II. díj</strong><br />\\r\\nDorner Boglárka Tamara - <strong>III. díj</strong><br />\\r\\nBirton Réka és Vincze Tamás<em> - </em><strong>döntöbe kerültek</strong></p>\\r\\n\\r\\n<p><strong>XII. Országos Esettanulmány Verseny, Budapest:</strong><br />\\r\\nBirton Réka, Barok István, Laczkó Dénes és Vincze Tamás&nbsp;-&nbsp;<strong>I. díj</strong></p>\\r\\n\\r\\n<p><strong>X. Csíkszeredai Nyílt Esettanulmányverseny, Csíkszereda:</strong><br />\\r\\nDorner Boglárka&nbsp;Tamara és Szőcs Kinga&nbsp;Beáta - <strong>II. díj</strong><br />\\r\\nRácz Béla&nbsp;Gergely - <strong>II. díj</strong></p>\\r\\n\\r\\n<p><strong>Kolozsvári Egyetemista Esettanulmány Versenyen 2011, Kolozsvár:</strong><br />\\r\\nDorner Boglárka&nbsp;Tamara, Erdély Attila, Farkas Csongor és Szőcs Kinga Beáta – <strong>I. díj</strong><br />\\r\\nÁbrahám Krisztina, Major Tamás és Ferencz Hunor – <strong>II. díj</strong><br />\\r\\nBaumgartner Mónika - <strong>III. díj</strong><br />\\r\\nBenkő Zsolt, Demeter Zselyke és László Tímea - <strong>dícséret</strong><br />\\r\\nFurdek Balázs, Rácz Béla-Gergely<em> - </em><strong>részvétel</strong></p>\\r\\n\\r\\n<p><strong>IX. Országos Pénzügyi Esettanulmány Verseny, Győr:</strong><br />\\r\\nLaczkó Dénes - <strong>II. díj</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Dr. Papp László Számviteli Esettanulmány Verseny, Pécs:</strong><br />\\nBarok István, Birton Réka, Laczkó Dénes és Vincze Tamás – <strong>I. díj</strong><br />\\nFarkas Csongor és Szőcs Kinga Beáta<em> - </em><strong>részvétel</strong></p>\\n<p><strong>dr. Susánszky János Nemzetközi Esettanulmányi Versenyt, Miskolc:</strong><br />\\nRácz Béla-Gergely - <strong>leggyakorlatiasabb megoldás különdíja</strong></p>\\n<p><strong>BCG Strategy Cup 2011, Budapest:</strong><br />\\nLőrincz Márta - <strong>I. díj</strong><br />\\nErdély Attila - <strong>részvétel</strong></p>\\n<p><strong>BCG Strategy Cup 2010, Budapest:</strong><br />\\nSzőcs Kinga Beáta - <strong>II. díj</strong><br />\\nDorner Boglárka Tamara - <strong>III. díj</strong><br />\\nBirton Réka és Vincze Tamás<em> - </em><strong>döntöbe kerültek</strong></p>\\n<p><strong>XII. Országos Esettanulmány Verseny, Budapest:</strong><br />\\nBirton Réka, Barok István, Laczkó Dénes és Vincze Tamás - <strong>I. díj</strong></p>\\n<p><strong>X. Csíkszeredai Nyílt Esettanulmányverseny, Csíkszereda:</strong><br />\\nDorner Boglárka Tamara és Szőcs Kinga Beáta - <strong>II. díj</strong><br />\\nRácz Béla Gergely - <strong>II. díj</strong></p>\\n<p><strong>Kolozsvári Egyetemista Esettanulmány Versenyen 2011, Kolozsvár:</strong><br />\\nDorner Boglárka Tamara, Erdély Attila, Farkas Csongor és Szőcs Kinga Beáta – <strong>I. díj</strong><br />\\nÁbrahám Krisztina, Major Tamás és Ferencz Hunor – <strong>II. díj</strong><br />\\nBaumgartner Mónika - <strong>III. díj</strong><br />\\nBenkő Zsolt, Demeter Zselyke és László Tímea - <strong>dícséret</strong><br />\\nFurdek Balázs, Rácz Béla-Gergely<em> - </em><strong>részvétel</strong></p>\\n<p><strong>IX. Országos Pénzügyi Esettanulmány Verseny, Győr:</strong><br />\\nLaczkó Dénes - <strong>II. díj</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Marketing-Menedzsment szekció:</strong></p>\\r\\n\\r\\n<p>Major Tamás:&nbsp;<em>Az üzleti ötlettől a vállalkozásig. Egy sportbázis kialakításának üzleti terve -&nbsp;</em><strong>I. hely</strong></p>\\r\\n\\r\\n<p>Dorner Boglárka – Tamara:&nbsp;<em>Reálopciós döntések alkalmazása atermékéletciklus-modellben -</em> <strong>II. hely</strong></p>\\r\\n\\r\\n<p>Erdély Attila:<em>Stratégiai döntési pontok a romániai hízómarhatermékpályán -</em>&nbsp;<strong>dícséret</strong></p>\\r\\n\\r\\n<p>Farkas Csongor: <em>Stratégiai döntések hatása a vállalat értékére</em></p>\\r\\n\\r\\n<p>Szőcs Kinga-Beáta: <em>A projektek teljesítési tervezésének&nbsp;értékelése a Félsziget rendezvényprojekt alapján</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Marketing-Menedzsment szekció:</strong></p>\\n<p>Major Tamás: <em>Az üzleti ötlettől a vállalkozásig. Egy sportbázis kialakításának üzleti terve - </em><strong>I. hely</strong></p>\\n<p>Dorner Boglárka – Tamara: <em>Reálopciós döntések alkalmazása atermékéletciklus-modellben -</em> <strong>II. hely</strong></p>\\n<p>Erdély Attila:<em>Stratégiai döntési pontok a romániai hízómarhatermékpályán -</em> <strong>dícséret</strong></p>\\n<p>Farkas Csongor: <em>Stratégiai döntések hatása a vállalat értékére</em></p>\\n<p>Szőcs Kinga-Beáta: <em>A projektek teljesítési tervezésének értékelése a Félsziget rendezvényprojekt alapján</em></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Hajdú Péter</strong>, general manager (Emerging Markets East), Cisco Systems International</p>\\r\\n\\r\\n<p><strong>dr. Christopher Ball,</strong> egyetemi tanár, MBA programvezető, Quinnipiac University</p>\\r\\n\\r\\n<p><strong>Huba Eörs</strong>, ügyvezető patner, IFUA Horváth &amp; Partners</p>\\r\\n\\r\\n<p><strong>Glattfelder Béla</strong>, magyarországi európai parlamenti képviselő, az EU Mezőgazdasági és Vidékfejlesztési Bizottságának a tagja</p>\\r\\n\\r\\n<p><strong>dr. Kuti Mónika</strong>, a Pécsi Tudományegyetem Közgazdaságtudományi Karának oktatója</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Hajdú Péter</strong>, general manager (Emerging Markets East), Cisco Systems International</p>\\n<p><strong>dr. Christopher Ball,</strong> egyetemi tanár, MBA programvezető, Quinnipiac University</p>\\n<p><strong>Huba Eörs</strong>, ügyvezető patner, IFUA Horváth &amp; Partners</p>\\n<p><strong>Glattfelder Béla</strong>, magyarországi európai parlamenti képviselő, az EU Mezőgazdasági és Vidékfejlesztési Bizottságának a tagja</p>\\n<p><strong>dr. Kuti Mónika</strong>, a Pécsi Tudományegyetem Közgazdaságtudományi Karának oktatója</p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>4. \\"Managerial Challenges of the Contemporary Society\\":</strong><br />\\r\\n<strong>Barok István és Dorner Boglárka (2011):</strong>&nbsp;<em>Food Industry Suppliers\' Management Strategies During the Economic Crisis</em><br />\\r\\n<br />\\r\\n<strong>8. Közép-Európai Konferencia: </strong><br />\\r\\n<strong>Dorner Boglárka, Erdély Attila, Farkas Csongor és Szőcs Kinga,</strong> <em>részvétel a „Újdonságok a&nbsp;stratégiai menedzsmentben” szekciómunkában</em></p>\\r\\n\\r\\n<p><strong>Bajnokok Ligája” Társadalomtudományi Konferencia:</strong><br />\\r\\n<strong>Barok István, Dorner Boglárka-Tamara:</strong>&nbsp;<em>Élelmiszeripari beszállítók válságkezelése – a Romchemicals Kft. esete. II. hely</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>4. \\"Managerial Challenges of the Contemporary Society\\":</strong><br /><strong>Barok István és Dorner Boglárka (2011):</strong> <em>Food Industry Suppliers\' Management Strategies During the Economic Crisis</em></p>\\n<p><strong>8. Közép-Európai Konferencia: </strong><br /><strong>Dorner Boglárka, Erdély Attila, Farkas Csongor és Szőcs Kinga,</strong> <em>részvétel a „Újdonságok a stratégiai menedzsmentben” szekciómunkában</em></p>\\n<p><strong>Bajnokok Ligája” Társadalomtudományi Konferencia:</strong><br /><strong>Barok István, Dorner Boglárka-Tamara:</strong> <em>Élelmiszeripari beszállítók válságkezelése – a Romchemicals Kft. esete. II. hely</em></p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Vállalatfinanszírozás szekció:&nbsp;</strong>Lőrincz Márta – <strong>II. díj</strong></p>\\r\\n\\r\\n<p><strong>Stratégiai menedzsment szekció:&nbsp;</strong>Laczkó Dénes és Vincze Tamás – <strong>II. díj</strong></p>\\r\\n\\r\\n<p><strong>Részt vettek:&nbsp;</strong>Barok István, Dorner Boglárka</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Vállalatfinanszírozás szekció: </strong>Lőrincz Márta – <strong>II. díj</strong></p>\\n<p><strong>Stratégiai menedzsment szekció: </strong>Laczkó Dénes és Vincze Tamás – <strong>II. díj</strong></p>\\n<p><strong>Részt vettek: </strong>Barok István, Dorner Boglárka</p>\\n",
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
      \'last_comment_timestamp\' => \'1421687986\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'736\',
        \'source\' => \'node/726\',
        \'alias\' => \'2010-2011-tevékenységi-beszámoló\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1185\',
      \'uid\' => \'3\',
      \'title\' => \'Török-Dani Renáta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'517ac515-b892-4669-993a-f0e66bc4443d\',
      \'nid\' => \'1185\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423726879\',
      \'changed\' => \'1423726879\',
      \'tnid\' => \'1184\',
      \'translate\' => \'0\',
      \'uuid\' => \'ab85d089-3ce5-4fd5-9e0f-fea67e838b50\',
      \'revision_timestamp\' => \'1423726879\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Highschool alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Highschool alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1007\',
            \'uid\' => \'3\',
            \'filename\' => \'török.reni_.jpg\',
            \'uri\' => \'public://török.reni_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'16967\',
            \'status\' => \'1\',
            \'timestamp\' => \'1423726850\',
            \'type\' => \'image\',
            \'uuid\' => \'ae6eaa0c-d272-4a84-b961-e058952541a7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Török-Dani Renáta\',
            \'format\' => NULL,
            \'safe_value\' => \'Török-Dani Renáta\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Török-Dani Renáta\',
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
      \'last_comment_timestamp\' => \'1423726879\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1196\',
        \'source\' => \'node/1185\',
        \'alias\' => \'török-dani-renáta\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'723\',
      \'uid\' => \'3\',
      \'title\' => \'Tasnádi Márta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c871ae81-0b34-4392-894b-eb0085751b8b\',
      \'nid\' => \'723\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421680602\',
      \'changed\' => \'1421855544\',
      \'tnid\' => \'723\',
      \'translate\' => \'0\',
      \'uuid\' => \'add3fc57-fad2-469e-8296-acb7f74349ce\',
      \'revision_timestamp\' => \'1421855544\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Középiskolás Program Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Középiskolás Program Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'585\',
            \'uid\' => \'3\',
            \'filename\' => \'Tasnádi Cropped.jpg\',
            \'uri\' => \'public://Tasnádi Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32983\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855544\',
            \'type\' => \'image\',
            \'uuid\' => \'134ba7d5-2418-46fc-b6a5-6d96cb5bfb55\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Tasnádi Márta\',
            \'format\' => NULL,
            \'safe_value\' => \'Tasnádi Márta\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Tasnádi Márta\',
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
      \'last_comment_timestamp\' => \'1421680602\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'733\',
        \'source\' => \'node/723\',
        \'alias\' => \'tasnádi-márta\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1177\',
      \'uid\' => \'3\',
      \'title\' => \'2012-2013 \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b03ae7f5-af60-449c-b44a-dba15719d00c\',
      \'nid\' => \'1177\',
      \'type\' => \'result\',
      \'language\' => \'ro\',
      \'created\' => \'1423483137\',
      \'changed\' => \'1424260688\',
      \'tnid\' => \'728\',
      \'translate\' => \'0\',
      \'uuid\' => \'af2ae94b-cede-44fb-a31b-6d6ee2aa5c17\',
      \'revision_timestamp\' => \'1424260688\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Membrii GTK în anul academic 2012/2013 au participat la 11 competiții și au fost premiați la 9. Au participat și la conferințe științifice naționale și internaționale. În anul respectiv programul nou a fost Programul Leadership organizat împreună cu MCC. &nbsp;&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Membrii GTK în anul academic 2012/2013 au participat la 11 competiții și au fost premiați la 9. Au participat și la conferințe științifice naționale și internaționale. În anul respectiv programul nou a fost Programul Leadership organizat împreună cu MCC.   </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>V-a edi</strong><strong>ţ</strong><strong>ie a Concursului de Studii de Caz </strong><strong>î</strong><strong>n Contabilitate „Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong>:</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p>Baumgartner Mónika (alumni), Demeter Zselyke, Erdély Attila (alumni) - <strong>Locul III.</strong></p>\\r\\n\\r\\n<p>Dorner Boglárka (alumni), Furdek Balázs, Salamon Ádám, Szőcs Kinga Beáta (alumni) - <strong>Semifinala group Locul II.</strong></p>\\r\\n\\r\\n<p><strong>Concursul de studii de caz ESET’12:</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Erdély Attila (alumni), Szőcs Kinga Beáta (alumni)</p>\\r\\n\\r\\n<p><strong>European Case Study Competition for Consulting Clubs:</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni) - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>XI-lea edi</strong><strong>ţ</strong><strong>ie a Concursului Na</strong><strong>ţ</strong><strong>ional de Studii de Caz </strong><strong>î</strong><strong>n Finan</strong><strong>ţ</strong><strong>e:</strong></p>\\r\\n\\r\\n<p>Baumgartner Mónika (alumni), Erdély Attila (alumni), Salamon Ádám - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>XII. Concurs de Studii de Caz </strong><strong>„</strong><strong>T</strong><strong>í</strong><strong>m</strong><strong>á</strong><strong>r L</strong><strong>á</strong><strong>szl</strong><strong>ó”</strong><strong>:</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Rákóczi Roland - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>XIV. Concurs Na</strong><strong>ţ</strong><strong>ional de Studii de Caz din Budapesta</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni)</p>\\r\\n\\r\\n<p><strong>Concursul de Studii de Caz din Cluj-Napoca 2013:</strong></p>\\r\\n\\r\\n<p>Ábrán Csilla-Hajnalka, Kiss Alpár, Német Hunor - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Major Tamás (alumni) - <strong>Locul II.</strong></p>\\r\\n\\r\\n<p>Czirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kovács Anita - <strong>Locul III.</strong></p>\\r\\n\\r\\n<p><strong>7-a edi</strong><strong>ţ</strong><strong>ie a concursului interna</strong><strong>ţ</strong><strong>ional Freshhh:</strong></p>\\r\\n\\r\\n<p>Furdek Balázs, Rákóczi Roland, Salamon Ádám - <strong>Locul III.</strong></p>\\r\\n\\r\\n<p><strong>12-a edi</strong><strong>ţ</strong><strong>ie a Concursului Deschis de Studii de Caz din Miercurea Ciuc:</strong></p>\\r\\n\\r\\n<p>Ábrán Csilla-Hajnalka, Czirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kiss Alpár, Német Hunor, Kovács Anita, Székely Rita</p>\\r\\n\\r\\n<p><strong>IV. Concursul de Studii de Caz </strong><strong>î</strong><strong>n Comunicare </strong><strong>ș</strong><strong>i Marketing:</strong></p>\\r\\n\\r\\n<p>Demeter Zselyke - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>II. Concursului de Studii de Caz </strong><strong>î</strong><strong>n Contabilitate </strong><strong>ș</strong><strong>i Finan</strong><strong>ţ</strong><strong>e la Budapesta:</strong></p>\\r\\n\\r\\n<p>Baumgartner Mónika (alumni), Benkő Zsolt, Erdély Attila (alumni)</p>\\r\\n\\r\\n<p><strong>Concursul de simul</strong><strong>ă</strong><strong>ri bancare Cupa K&amp;H 2012:</strong></p>\\r\\n\\r\\n<p>Szőcs Kinga Beáta, Rákóczi Roland</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>V-a edi</strong><strong>ţ</strong><strong>ie a Concursului de Studii de Caz </strong><strong>î</strong><strong>n Contabilitate „Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong>:</strong></p>\\n<p>Ábrahám Krisztina - <strong>Locul I.</strong></p>\\n<p>Baumgartner Mónika (alumni), Demeter Zselyke, Erdély Attila (alumni) - <strong>Locul III.</strong></p>\\n<p>Dorner Boglárka (alumni), Furdek Balázs, Salamon Ádám, Szőcs Kinga Beáta (alumni) - <strong>Semifinala group Locul II.</strong></p>\\n<p><strong>Concursul de studii de caz ESET’12:</strong></p>\\n<p>Ábrahám Krisztina, Erdély Attila (alumni), Szőcs Kinga Beáta (alumni)</p>\\n<p><strong>European Case Study Competition for Consulting Clubs:</strong></p>\\n<p>Ábrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni) - <strong>Locul I.</strong></p>\\n<p><strong>XI-lea edi</strong><strong>ţ</strong><strong>ie a Concursului Na</strong><strong>ţ</strong><strong>ional de Studii de Caz </strong><strong>î</strong><strong>n Finan</strong><strong>ţ</strong><strong>e:</strong></p>\\n<p>Baumgartner Mónika (alumni), Erdély Attila (alumni), Salamon Ádám - <strong>Locul I.</strong></p>\\n<p><strong>XII. Concurs de Studii de Caz </strong><strong>„</strong><strong>T</strong><strong>í</strong><strong>m</strong><strong>á</strong><strong>r L</strong><strong>á</strong><strong>szl</strong><strong>ó”</strong><strong>:</strong></p>\\n<p>Ábrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Rákóczi Roland - <strong>Locul I.</strong></p>\\n<p><strong>XIV. Concurs Na</strong><strong>ţ</strong><strong>ional de Studii de Caz din Budapesta</strong></p>\\n<p>Ábrahám Krisztina, Erdély Attila (alumni), Furdek Balázs, Szőcs Kinga Beáta (alumni)</p>\\n<p><strong>Concursul de Studii de Caz din Cluj-Napoca 2013:</strong></p>\\n<p>Ábrán Csilla-Hajnalka, Kiss Alpár, Német Hunor - <strong>Locul I.</strong></p>\\n<p>Ábrahám Krisztina, Benkő Zsolt, Demeter Zselyke, Major Tamás (alumni) - <strong>Locul II.</strong></p>\\n<p>Czirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kovács Anita - <strong>Locul III.</strong></p>\\n<p><strong>7-a edi</strong><strong>ţ</strong><strong>ie a concursului interna</strong><strong>ţ</strong><strong>ional Freshhh:</strong></p>\\n<p>Furdek Balázs, Rákóczi Roland, Salamon Ádám - <strong>Locul III.</strong></p>\\n<p><strong>12-a edi</strong><strong>ţ</strong><strong>ie a Concursului Deschis de Studii de Caz din Miercurea Ciuc:</strong></p>\\n<p>Ábrán Csilla-Hajnalka, Czirják Renáta Hajnalka, Dombi Tünde, Guttmann Csongor, Kiss Alpár, Német Hunor, Kovács Anita, Székely Rita</p>\\n<p><strong>IV. Concursul de Studii de Caz </strong><strong>î</strong><strong>n Comunicare </strong><strong>ș</strong><strong>i Marketing:</strong></p>\\n<p>Demeter Zselyke - <strong>Locul I.</strong></p>\\n<p><strong>II. Concursului de Studii de Caz </strong><strong>î</strong><strong>n Contabilitate </strong><strong>ș</strong><strong>i Finan</strong><strong>ţ</strong><strong>e la Budapesta:</strong></p>\\n<p>Baumgartner Mónika (alumni), Benkő Zsolt, Erdély Attila (alumni)</p>\\n<p><strong>Concursul de simul</strong><strong>ă</strong><strong>ri bancare Cupa K&amp;H 2012:</strong></p>\\n<p>Szőcs Kinga Beáta, Rákóczi Roland</p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Management locul I.</strong></p>\\r\\n\\r\\n<p>Demeter Zselyke</p>\\r\\n\\r\\n<p>Erdély Attila</p>\\r\\n\\r\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Management locul II.</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Kiss Alpár, Német Hunor Attila</p>\\r\\n\\r\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Management locul III.</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Czirják Renáta Hajnalka, Guttmann Csongor,&nbsp;Kovács Anita</p>\\r\\n\\r\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Management Men</strong><strong>ţ</strong><strong>iune</strong></p>\\r\\n\\r\\n<p>Ábrán Csilla-Hajnalka, Dombi Tünde</p>\\r\\n\\r\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Finan</strong><strong>ţ</strong><strong>e b</strong><strong>ă</strong><strong>nci locul I.</strong></p>\\r\\n\\r\\n<p>Salamon Ádám</p>\\r\\n\\r\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Finan</strong><strong>ţ</strong><strong>e b</strong><strong>ă</strong><strong>nci locul II.</strong></p>\\r\\n\\r\\n<p>Rákóczi Roland</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Management locul I.</strong></p>\\n<p>Demeter Zselyke</p>\\n<p>Erdély Attila</p>\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Management locul II.</strong></p>\\n<p>Ábrahám Krisztina, Kiss Alpár, Német Hunor Attila</p>\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Management locul III.</strong></p>\\n<p>Ábrahám Krisztina, Czirják Renáta Hajnalka, Guttmann Csongor, Kovács Anita</p>\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Management Men</strong><strong>ţ</strong><strong>iune</strong></p>\\n<p>Ábrán Csilla-Hajnalka, Dombi Tünde</p>\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Finan</strong><strong>ţ</strong><strong>e b</strong><strong>ă</strong><strong>nci locul I.</strong></p>\\n<p>Salamon Ádám</p>\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea Finan</strong><strong>ţ</strong><strong>e b</strong><strong>ă</strong><strong>nci locul II.</strong></p>\\n<p>Rákóczi Roland</p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Bilib</strong><strong>ó</strong><strong>k Botond, </strong>director general, Concorde Asset Management</p>\\r\\n\\r\\n<p><strong>dr. David Sims, </strong>profesor al City University London –&nbsp;Cass Business School</p>\\r\\n\\r\\n<p><strong>Huba E</strong><strong>ö</strong><strong>rs, </strong>director general, IFUA Horváth &amp; Partners</p>\\r\\n\\r\\n<p><strong>Lieb Mih</strong><strong>á</strong><strong>ly, </strong>proprietarul companiei Autonet</p>\\r\\n\\r\\n<p><strong>Szab</strong><strong>ó</strong><strong> Levente, </strong>director general al băncii Takarékbank Zrt.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Bilib</strong><strong>ó</strong><strong>k Botond, </strong>director general, Concorde Asset Management</p>\\n<p><strong>dr. David Sims, </strong>profesor al City University London – Cass Business School</p>\\n<p><strong>Huba E</strong><strong>ö</strong><strong>rs, </strong>director general, IFUA Horváth &amp; Partners</p>\\n<p><strong>Lieb Mih</strong><strong>á</strong><strong>ly, </strong>proprietarul companiei Autonet</p>\\n<p><strong>Szab</strong><strong>ó</strong><strong> Levente, </strong>director general al băncii Takarékbank Zrt.</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>IX. Conferin</strong><strong>ţ</strong><strong>a „Europa Central</strong><strong>ă</strong><strong>”:&nbsp;Ábrahám Krisztina (2013)&nbsp;</strong><em>secţiunea „IMM-uri din Europa Central”</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>6th International Management Conference Managerial&nbsp;Challenges of the Contemporary Society:&nbsp;Szász Levente, Demeter Zselyke (2013):</strong><em>&nbsp;Improving operations based on competitive priority mapping:&nbsp;a case study in the plastics industry</em></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>IX. Conferin</strong><strong>ţ</strong><strong>a „Europa Central</strong><strong>ă</strong><strong>”: Ábrahám Krisztina (2013) </strong><em>secţiunea „IMM-uri din Europa Central”</em></p>\\n<p class=\\"rtejustify\\"><strong>6th International Management Conference Managerial Challenges of the Contemporary Society: Szász Levente, Demeter Zselyke (2013):</strong><em> Improving operations based on competitive priority mapping: a case study in the plastics industry</em></p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Ábrán Csilla és Dombi Tünde @ Tipo Holding<br />\\r\\nSzékely Rita és Czirják Renáta @ MarsoRom<br />\\r\\nKovács Anita és Német Hunor @ Romchemicals<br />\\r\\nGuttmann Csongor és Kiss Alpár @ East Consulting</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ábrán Csilla és Dombi Tünde @ Tipo Holding<br />\\nSzékely Rita és Czirják Renáta @ MarsoRom<br />\\nKovács Anita és Német Hunor @ Romchemicals<br />\\nGuttmann Csongor és Kiss Alpár @ East Consulting</p>\\n",
          ),
        ),
      ),
      \'field_otdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Sec</strong><strong>ţiunea economia afecerilor:&nbsp;</strong>Major Tamás<strong> </strong>(alumni), <strong>locul I.</strong></p>\\r\\n\\r\\n<p><strong>Sec</strong><strong>ţiunea Corporate Finance:&nbsp;</strong>Dorner Boglárka, <strong>locul III.</strong></p>\\r\\n\\r\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea strategie </strong><strong>ș</strong><strong>i managementul schimb</strong><strong>ării:&nbsp;</strong>Erdély Attila,<strong> </strong><strong>premiu special</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Sec</strong><strong>ţiunea economia afecerilor: </strong>Major Tamás<strong> </strong>(alumni), <strong>locul I.</strong></p>\\n<p><strong>Sec</strong><strong>ţiunea Corporate Finance: </strong>Dorner Boglárka, <strong>locul III.</strong></p>\\n<p><strong>Sec</strong><strong>ţ</strong><strong>iunea strategie </strong><strong>ș</strong><strong>i managementul schimb</strong><strong>ării: </strong>Erdély Attila,<strong> </strong><strong>premiu special</strong></p>\\n",
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
      \'last_comment_timestamp\' => \'1423483137\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1188\',
        \'source\' => \'node/1177\',
        \'alias\' => \'2012-2013\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'724\',
      \'uid\' => \'3\',
      \'title\' => \'Tóth Klára\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8221a14b-3814-4fc9-945d-810e52ffdf13\',
      \'nid\' => \'724\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421680634\',
      \'changed\' => \'1421855548\',
      \'tnid\' => \'724\',
      \'translate\' => \'0\',
      \'uuid\' => \'b25ba7d7-3567-4e58-b004-b4dfe5a87d33\',
      \'revision_timestamp\' => \'1421855548\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Középiskolás Program Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Középiskolás Program Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'586\',
            \'uid\' => \'3\',
            \'filename\' => \'Toth_Klári Cropped.jpg\',
            \'uri\' => \'public://Toth_Klári Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31457\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855548\',
            \'type\' => \'image\',
            \'uuid\' => \'dffa683b-0288-4570-ae23-280670f8eeb9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'266\',
              \'height\' => \'266\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'266\',
            \'height\' => \'266\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Tóth Klára\',
            \'format\' => NULL,
            \'safe_value\' => \'Tóth Klára\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Tóth Klára\',
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
      \'last_comment_timestamp\' => \'1421680634\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'734\',
        \'source\' => \'node/724\',
        \'alias\' => \'tóth-klára\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1179\',
      \'uid\' => \'3\',
      \'title\' => \'2011-2012 \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'aa455cc0-35f3-42de-8063-cf6c4b06a35b\',
      \'nid\' => \'1179\',
      \'type\' => \'result\',
      \'language\' => \'ro\',
      \'created\' => \'1423484004\',
      \'changed\' => \'1424261286\',
      \'tnid\' => \'727\',
      \'translate\' => \'0\',
      \'uuid\' => \'b270e6bd-8022-4318-90d2-6ad58b788653\',
      \'revision_timestamp\' => \'1424261286\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">În anul academic 2011/2012 membrii GTK au participat la diferite traininguri și au învățat de la experți naționali și internaționali. Au particiat la&nbsp;competiții și conferințe științifiice cu rezultate remarcabile.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">În anul academic 2011/2012 membrii GTK au participat la diferite traininguri și au învățat de la experți naționali și internaționali. Au particiat la competiții și conferințe științifiice cu rezultate remarcabile. </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>11-a edi</strong><strong>ţ</strong><strong>ie a Concursului Deschis de Studii de Caz din Miercurea Ciuc:</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina – <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>Participare: </strong>Zsolt Benkő, Boglárka-Tamara Dorner, Attila Erdély, Csaba Kristály, Tamás Major, Kinga-Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>IV-lea Concurs Interna</strong><strong>ţ</strong><strong>ional de Studii de Caz „dr. Sus</strong><strong>á</strong><strong>nszky J</strong><strong>á</strong><strong>nos”, Miskolc:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám, Zsolt Benkő, Tamás Major, Kinga-Beáta Szőcs - <strong>premiu special</strong></p>\\r\\n\\r\\n<p><strong>Prima edi</strong><strong>ţ</strong><strong>ie a Concursului de Studii de Caz </strong><strong>î</strong><strong>n domeniul Contabilit</strong><strong>ăţ</strong><strong>ii </strong><strong>ș</strong><strong>i Finan</strong><strong>ţ</strong><strong>elor, Budapesta:</strong></p>\\r\\n\\r\\n<p>Mónika Baumgartner, Attila Erdély, Béla Rácz&nbsp;(alumni) – <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>Concursul de Studii de Caz din Cluj-Napoca 2012,&nbsp;Cluj Napoca:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám and Hunor Ferencz – <strong>Locul I</strong>.</p>\\r\\n\\r\\n<p>Zsolt Benkő, Boglárka–Tamara Dorner, Csongor&nbsp;Farkas and Kinga–Beáta Szőcs – <strong>Locul II.</strong></p>\\r\\n\\r\\n<p>Zselyke Demeter, Balázs Furdek, Roland Rákóczi&nbsp;and Ádám Salamon – <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\r\\n\\r\\n<p><strong>Participare: </strong>Csaba Kristály</p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2012, Budapesta:</strong></p>\\r\\n\\r\\n<p>Kinga-Beáta Szőcs - <strong>locul II.</strong></p>\\r\\n\\r\\n<p><strong>13-a edi</strong><strong>ţ</strong><strong>ie a Concursului Na</strong><strong>ţional de Studii de&nbsp;Caz, Budapesta:</strong></p>\\r\\n\\r\\n<p>Boglárka Tamara Dorner, Attila Erdély, Csongor&nbsp;Farkas, Kinga-Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>X-a edi</strong><strong>ţ</strong><strong>ie aniversar</strong><strong>ă a Concursului de Studii de&nbsp;Caz </strong><strong>î</strong><strong>n domeniul Finan</strong><strong>ţ</strong><strong>elor, Gy</strong><strong>ő</strong><strong>r:</strong></p>\\r\\n\\r\\n<p>Mónika Baumgartner, Zsolt Benkő and Béla&nbsp;Gergely Rácz – <strong>Locul III.</strong></p>\\r\\n\\r\\n<p><strong>IV-a edi</strong><strong>ţ</strong><strong>ie a Concursului de Studii de Caz </strong><strong>în&nbsp;Contabilitate „Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong>”</strong><strong>, P</strong><strong>é</strong><strong>cs:</strong></p>\\r\\n\\r\\n<p>Boglárka Dorner, Attila Erdély, Csongor Farkas,&nbsp;Kinga Szőcs, Mónika Baumgartner, Zsolt Benkő,&nbsp;Tamás Major, Csaba Kristály, Krisztina Ábrahám</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>11-a edi</strong><strong>ţ</strong><strong>ie a Concursului Deschis de Studii de Caz din Miercurea Ciuc:</strong></p>\\n<p>Ábrahám Krisztina – <strong>Locul I.</strong></p>\\n<p><strong>Participare: </strong>Zsolt Benkő, Boglárka-Tamara Dorner, Attila Erdély, Csaba Kristály, Tamás Major, Kinga-Beáta Szőcs</p>\\n<p><strong>IV-lea Concurs Interna</strong><strong>ţ</strong><strong>ional de Studii de Caz „dr. Sus</strong><strong>á</strong><strong>nszky J</strong><strong>á</strong><strong>nos”, Miskolc:</strong></p>\\n<p>Krisztina Ábrahám, Zsolt Benkő, Tamás Major, Kinga-Beáta Szőcs - <strong>premiu special</strong></p>\\n<p><strong>Prima edi</strong><strong>ţ</strong><strong>ie a Concursului de Studii de Caz </strong><strong>î</strong><strong>n domeniul Contabilit</strong><strong>ăţ</strong><strong>ii </strong><strong>ș</strong><strong>i Finan</strong><strong>ţ</strong><strong>elor, Budapesta:</strong></p>\\n<p>Mónika Baumgartner, Attila Erdély, Béla Rácz (alumni) – <strong>Locul I.</strong></p>\\n<p><strong>Concursul de Studii de Caz din Cluj-Napoca 2012, Cluj Napoca:</strong></p>\\n<p>Krisztina Ábrahám and Hunor Ferencz – <strong>Locul I</strong>.</p>\\n<p>Zsolt Benkő, Boglárka–Tamara Dorner, Csongor Farkas and Kinga–Beáta Szőcs – <strong>Locul II.</strong></p>\\n<p>Zselyke Demeter, Balázs Furdek, Roland Rákóczi and Ádám Salamon – <strong>men</strong><strong>ţ</strong><strong>iune</strong></p>\\n<p><strong>Participare: </strong>Csaba Kristály</p>\\n<p><strong>BCG Strategy Cup 2012, Budapesta:</strong></p>\\n<p>Kinga-Beáta Szőcs - <strong>locul II.</strong></p>\\n<p><strong>13-a edi</strong><strong>ţ</strong><strong>ie a Concursului Na</strong><strong>ţional de Studii de Caz, Budapesta:</strong></p>\\n<p>Boglárka Tamara Dorner, Attila Erdély, Csongor Farkas, Kinga-Beáta Szőcs</p>\\n<p><strong>X-a edi</strong><strong>ţ</strong><strong>ie aniversar</strong><strong>ă a Concursului de Studii de Caz </strong><strong>î</strong><strong>n domeniul Finan</strong><strong>ţ</strong><strong>elor, Gy</strong><strong>ő</strong><strong>r:</strong></p>\\n<p>Mónika Baumgartner, Zsolt Benkő and Béla Gergely Rácz – <strong>Locul III.</strong></p>\\n<p><strong>IV-a edi</strong><strong>ţ</strong><strong>ie a Concursului de Studii de Caz </strong><strong>în Contabilitate „Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong>”</strong><strong>, P</strong><strong>é</strong><strong>cs:</strong></p>\\n<p>Boglárka Dorner, Attila Erdély, Csongor Farkas, Kinga Szőcs, Mónika Baumgartner, Zsolt Benkő, Tamás Major, Csaba Kristály, Krisztina Ábrahám</p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Sec</strong><strong>ţ</strong><strong>ia de marketing-management:</strong></p>\\r\\n\\r\\n<p>Attila Erdély -&nbsp;<strong>locul II.</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Sec</strong><strong>ţ</strong><strong>ia de marketing-management:</strong></p>\\n<p>Attila Erdély - <strong>locul II.</strong></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>dr. Chistopher Ball,&nbsp;</strong>professor al Universităţii&nbsp;Quinnipiac,</p>\\r\\n\\r\\n<p><strong>Á</strong><strong>d</strong><strong>á</strong><strong>m Sz</strong><strong>ékely,&nbsp;</strong>manager general InfoGroup,</p>\\r\\n\\r\\n<p><strong>Bertalan J</strong><strong>á</strong><strong>szkuti</strong>,&nbsp;co-proprietar şi manager general&nbsp;la firma Heal Partners Srl</p>\\r\\n\\r\\n<p><strong>P</strong><strong>éter Karli,&nbsp;</strong>co-proprietari şi manager&nbsp;general&nbsp;la firma Heal Partners Srl</p>\\r\\n\\r\\n<p><strong>Tam</strong><strong>á</strong><strong>s </strong><strong>É</strong><strong>der</strong>,&nbsp;director PR al Bonafarm Group,&nbsp;preşedintele Federaţiei&nbsp;Industriilor Alimentare din&nbsp;Ungaria</p>\\r\\n\\r\\n<p><strong>Istv</strong><strong>á</strong><strong>n Matsk</strong><strong>ási,&nbsp;</strong>director financiar al Bonafarm&nbsp;Group</p>\\r\\n\\r\\n<p><strong>dr. David Sims,&nbsp;</strong>profesor al City University London&nbsp;– Cass Business School</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>dr. Chistopher Ball, </strong>professor al Universităţii Quinnipiac,</p>\\n<p><strong>Á</strong><strong>d</strong><strong>á</strong><strong>m Sz</strong><strong>ékely, </strong>manager general InfoGroup,</p>\\n<p><strong>Bertalan J</strong><strong>á</strong><strong>szkuti</strong>, co-proprietar şi manager general la firma Heal Partners Srl</p>\\n<p><strong>P</strong><strong>éter Karli, </strong>co-proprietari şi manager general la firma Heal Partners Srl</p>\\n<p><strong>Tam</strong><strong>á</strong><strong>s </strong><strong>É</strong><strong>der</strong>, director PR al Bonafarm Group, preşedintele Federaţiei Industriilor Alimentare din Ungaria</p>\\n<p><strong>Istv</strong><strong>á</strong><strong>n Matsk</strong><strong>ási, </strong>director financiar al Bonafarm Group</p>\\n<p><strong>dr. David Sims, </strong>profesor al City University London – Cass Business School</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1423484004\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1190\',
        \'source\' => \'node/1179\',
        \'alias\' => \'2011-2012\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'981\',
      \'uid\' => \'3\',
      \'title\' => \'Orbán Zsolt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e352defc-ef36-478c-86cf-6b19fd46c639\',
      \'nid\' => \'981\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226495\',
      \'changed\' => \'1423226495\',
      \'tnid\' => \'696\',
      \'translate\' => \'0\',
      \'uuid\' => \'b35e1f09-f7d8-40d4-bb9d-63fbcb742a0a\',
      \'revision_timestamp\' => \'1423226495\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>consultant, McKinsey &amp; Company</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>consultant, McKinsey &amp; Company</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'563\',
            \'uid\' => \'3\',
            \'filename\' => \'orban zsolt Cropped.jpg\',
            \'uri\' => \'public://orban zsolt Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23949\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853616\',
            \'type\' => \'image\',
            \'uuid\' => \'615cf41a-335f-4acf-94da-976b31b505fa\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Orbán Zsolt\',
            \'format\' => NULL,
            \'safe_value\' => \'Orbán Zsolt\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Orbán Zsolt\',
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
      \'last_comment_timestamp\' => \'1423226495\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'992\',
        \'source\' => \'node/981\',
        \'alias\' => \'orbán-zsolt\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1175\',
      \'uid\' => \'3\',
      \'title\' => \'2013-2014\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0bb27156-5db1-4d4c-9a55-62cc59cd64aa\',
      \'nid\' => \'1175\',
      \'type\' => \'result\',
      \'language\' => \'ro\',
      \'created\' => \'1423234858\',
      \'changed\' => \'1423578527\',
      \'tnid\' => \'627\',
      \'translate\' => \'0\',
      \'uuid\' => \'b3ae101b-b308-4df9-8fcd-31071b29a94c\',
      \'revision_timestamp\' => \'1423578527\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">În anul academic 2013/2014 membrii GTK au participat la 12 competiții și au adus&nbsp;11 premii. La conferința științifică ETDK toți au fost premiați. Mulțumit programului leadership, au avut ocazia de a participa la trainingurile unor experti renumiți.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">În anul academic 2013/2014 membrii GTK au participat la 12 competiții și au adus 11 premii. La conferința științifică ETDK toți au fost premiați. Mulțumit programului leadership, au avut ocazia de a participa la trainingurile unor experti renumiți.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Competiţia de studiu de caz organizat de HBCS, Budapesta:</strong></p>\\r\\n\\r\\n<p>Zselyke Demeter - <strong><em>Locul I. și </em></strong><strong>cel mai bun prezentator</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám (Alumni) - <strong>Locul II.</strong></p>\\r\\n\\r\\n<p><strong>Entrepreneurship Competition Vilnius, Vilnius (Lituania):</strong></p>\\r\\n\\r\\n<p>Albert Gáspár, Csilla Ábrán, Anita Kovács și Hunor Német - <strong>Locul VI.</strong></p>\\r\\n\\r\\n<p><strong>International Case Competition @ Maastricht, Maastricht (Olanda):</strong></p>\\r\\n\\r\\n<p>Csilla Ábrán, Gáspár Albert, Zsuzsa Kerekes și Hunor Német -&nbsp;<strong><em>Semifinala group Locul III.</em></strong></p>\\r\\n\\r\\n<p><strong>BCG Strategy Cup 2014, Budapesta:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám (alumni) - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>Concursul de Studii de Caz „Dr. Susánszky János”, Miskolc:</strong></p>\\r\\n\\r\\n<p>Renáta Czirják, Zselyke Demeter, Alpár Kiss și Rita Székely - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>XIII-lea Concurs de Studii de Caz ”Tímár László”, Veszprém:</strong></p>\\r\\n\\r\\n<p>Zselyke Demeter, Zsuzsa Kerekes, Alpár Kiss și Anita Kovács - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p>Zselyke Demeter - <strong>Special Prize for Best Foreign Presenter</strong></p>\\r\\n\\r\\n<p><strong>XV-lea Concurs Naţional de Studii de Caz, Budapesta:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám (alumni), Zsolt Benkő (alumni),&nbsp;Zselyke Demeter, Alpár Kiss</p>\\r\\n\\r\\n<p><strong>KICC- KPMG International Case Competition, București:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám (alumni), Csilla Ábrán, Renáta Czirják,&nbsp;Hunor Német - <strong>Locul II.</strong></p>\\r\\n\\r\\n<p><strong>XII-lea ediţie a Concursului Naţional de Studii de Caz în Finanţe, Győr:</strong></p>\\r\\n\\r\\n<p>Zselyke Demeter și Ádám Salamon (alumni) - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p><strong>IV-lea Concurs al Planurilor de Afacere, Sfântu Gheorghe:</strong></p>\\r\\n\\r\\n<p>Csaba Kristály (alumni) - <strong>Locul II.</strong></p>\\r\\n\\r\\n<p><strong>VI-a ediţie a Concursului de Studii de Caz&nbsp;în Contabilitate „Dr. Papp László”, Pécs:</strong></p>\\r\\n\\r\\n<p>Krisztina Ábrahám (alumni) - <strong>Locul II.</strong></p>\\r\\n\\r\\n<p><strong>Finaliști au fost</strong>: Zselyke Demeter, Tünde Dombi, Anita Kovács, Rita Székely</p>\\r\\n\\r\\n<p><strong>Concursul de Studii de Caz din Cluj-Napoca 2014, Cluj-Napoca:</strong></p>\\r\\n\\r\\n<p>Zselyke Demeter, Renáta Czirják, Alpár Kiss, Rita Székely - <strong>Locul I.</strong></p>\\r\\n\\r\\n<p>Csilla Ábrán, Gáspár Albert, Zsuzsa Kerekes, Hunor Német - <strong>Locul II.</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Competiţia de studiu de caz organizat de HBCS, Budapesta:</strong></p>\\n<p>Zselyke Demeter - <strong><em>Locul I. și </em></strong><strong>cel mai bun prezentator</strong></p>\\n<p>Krisztina Ábrahám (Alumni) - <strong>Locul II.</strong></p>\\n<p><strong>Entrepreneurship Competition Vilnius, Vilnius (Lituania):</strong></p>\\n<p>Albert Gáspár, Csilla Ábrán, Anita Kovács și Hunor Német - <strong>Locul VI.</strong></p>\\n<p><strong>International Case Competition @ Maastricht, Maastricht (Olanda):</strong></p>\\n<p>Csilla Ábrán, Gáspár Albert, Zsuzsa Kerekes și Hunor Német - <strong><em>Semifinala group Locul III.</em></strong></p>\\n<p><strong>BCG Strategy Cup 2014, Budapesta:</strong></p>\\n<p>Krisztina Ábrahám (alumni) - <strong>Locul I.</strong></p>\\n<p><strong>Concursul de Studii de Caz „Dr. Susánszky János”, Miskolc:</strong></p>\\n<p>Renáta Czirják, Zselyke Demeter, Alpár Kiss și Rita Székely - <strong>Locul I.</strong></p>\\n<p><strong>XIII-lea Concurs de Studii de Caz ”Tímár László”, Veszprém:</strong></p>\\n<p>Zselyke Demeter, Zsuzsa Kerekes, Alpár Kiss și Anita Kovács - <strong>Locul I.</strong></p>\\n<p>Zselyke Demeter - <strong>Special Prize for Best Foreign Presenter</strong></p>\\n<p><strong>XV-lea Concurs Naţional de Studii de Caz, Budapesta:</strong></p>\\n<p>Krisztina Ábrahám (alumni), Zsolt Benkő (alumni), Zselyke Demeter, Alpár Kiss</p>\\n<p><strong>KICC- KPMG International Case Competition, București:</strong></p>\\n<p>Krisztina Ábrahám (alumni), Csilla Ábrán, Renáta Czirják, Hunor Német - <strong>Locul II.</strong></p>\\n<p><strong>XII-lea ediţie a Concursului Naţional de Studii de Caz în Finanţe, Győr:</strong></p>\\n<p>Zselyke Demeter și Ádám Salamon (alumni) - <strong>Locul I.</strong></p>\\n<p><strong>IV-lea Concurs al Planurilor de Afacere, Sfântu Gheorghe:</strong></p>\\n<p>Csaba Kristály (alumni) - <strong>Locul II.</strong></p>\\n<p><strong>VI-a ediţie a Concursului de Studii de Caz în Contabilitate „Dr. Papp László”, Pécs:</strong></p>\\n<p>Krisztina Ábrahám (alumni) - <strong>Locul II.</strong></p>\\n<p><strong>Finaliști au fost</strong>: Zselyke Demeter, Tünde Dombi, Anita Kovács, Rita Székely</p>\\n<p><strong>Concursul de Studii de Caz din Cluj-Napoca 2014, Cluj-Napoca:</strong></p>\\n<p>Zselyke Demeter, Renáta Czirják, Alpár Kiss, Rita Székely - <strong>Locul I.</strong></p>\\n<p>Csilla Ábrán, Gáspár Albert, Zsuzsa Kerekes, Hunor Német - <strong>Locul II.</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Secţiunea Management - Locul I.</strong></p>\\r\\n\\r\\n<p>Albert&nbsp;Gáspár:&nbsp;<em>Impactul serviciilor asupra modelului de afaceri al producătorului și&nbsp;performanţa financiară - un studiu de caz al unei companii farmaceutice&nbsp;românești</em></p>\\r\\n\\r\\n<p>Demeter Zselyke:<em>&nbsp;Concurente modele de afaceri: lanţuri tradiţionale vs scurte de aprovizionare&nbsp;din industria alimentară</em></p>\\r\\n\\r\\n<p><strong>Secţiunea Management - Locul II.</strong></p>\\r\\n\\r\\n<p>Kiss Alpár, Székely Rita, Czirják Renáta:&nbsp;<em>Rolul partenerilor 3PL în lanțul de aprovizionare cu alimente în România</em></p>\\r\\n\\r\\n<p>Német Hunor Attila, Guttmann Csongor István, Kovács Anita:&nbsp;<em>Care este următorul pas Farmec? - Dezvoltarea strategiei de creștere în regiunea de Nord-Vets Europa</em></p>\\r\\n\\r\\n<p><strong>Secţiunea Management -&nbsp;Locul III.</strong></p>\\r\\n\\r\\n<p>Dombi Tünde:<strong>&nbsp;</strong><em>Strategia de extindere a Optiko Ltd. în industria de optică</em></p>\\r\\n\\r\\n<p>Fehér Attila, Fekete Réka, Demeter Zselyke:<em>&nbsp;Strategia de piaţă companii din industria alimentară - un studiu&nbsp;de caz al companiei Hochland</em></p>\\r\\n\\r\\n<p><strong>Secţiunea Finanţe și Bănci -&nbsp;Menţiune</strong></p>\\r\\n\\r\\n<p>Ábárn Csilla-Hajnalka:&nbsp;<em>Analiza portofoliului de credite comerciale MarsoRom compainei de distribuție de anvelope</em></p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Secţiunea Management - Locul I.</strong></p>\\n<p>Albert Gáspár: <em>Impactul serviciilor asupra modelului de afaceri al producătorului și performanţa financiară - un studiu de caz al unei companii farmaceutice românești</em></p>\\n<p>Demeter Zselyke:<em> Concurente modele de afaceri: lanţuri tradiţionale vs scurte de aprovizionare din industria alimentară</em></p>\\n<p><strong>Secţiunea Management - Locul II.</strong></p>\\n<p>Kiss Alpár, Székely Rita, Czirják Renáta: <em>Rolul partenerilor 3PL în lanțul de aprovizionare cu alimente în România</em></p>\\n<p>Német Hunor Attila, Guttmann Csongor István, Kovács Anita: <em>Care este următorul pas Farmec? - Dezvoltarea strategiei de creștere în regiunea de Nord-Vets Europa</em></p>\\n<p><strong>Secţiunea Management - Locul III.</strong></p>\\n<p>Dombi Tünde:<strong> </strong><em>Strategia de extindere a Optiko Ltd. în industria de optică</em></p>\\n<p>Fehér Attila, Fekete Réka, Demeter Zselyke:<em> Strategia de piaţă companii din industria alimentară - un studiu de caz al companiei Hochland</em></p>\\n<p><strong>Secţiunea Finanţe și Bănci - Menţiune</strong></p>\\n<p>Ábárn Csilla-Hajnalka: <em>Analiza portofoliului de credite comerciale MarsoRom compainei de distribuție de anvelope</em></p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Obiective:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>cunoştinţe şi abilităţi practice în domeniul planificării unei afaceri</li>\\r\\n\\t<li>însuşirea bazelor gândirii antreprenoriale</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>5 traininguri:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Antreprenoriat, întreprindere, ideea de&nbsp;afaceri, analiza pieţei</li>\\r\\n\\t<li>Plan operaţional, managementul&nbsp;resurselor umane</li>\\r\\n\\t<li>Marketing</li>\\r\\n\\t<li>Finanţe</li>\\r\\n\\t<li>Technici de prezentare</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Participanți:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>30 &nbsp;de elevi</li>\\r\\n\\t<li>8 echipe</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Coordonatori:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Ábrahám Krisztina</li>\\r\\n\\t<li>Rácz Béla Gergely</li>\\r\\n\\t<li>Vincze Tamás</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Obiective:</strong></p>\\n<ul><li>cunoştinţe şi abilităţi practice în domeniul planificării unei afaceri</li>\\n<li>însuşirea bazelor gândirii antreprenoriale</li>\\n</ul><p><strong>5 traininguri:</strong></p>\\n<ul><li>Antreprenoriat, întreprindere, ideea de afaceri, analiza pieţei</li>\\n<li>Plan operaţional, managementul resurselor umane</li>\\n<li>Marketing</li>\\n<li>Finanţe</li>\\n<li>Technici de prezentare</li>\\n</ul><p><strong>Participanți:</strong></p>\\n<ul><li>30  de elevi</li>\\n<li>8 echipe</li>\\n</ul><p><strong>Coordonatori:</strong></p>\\n<ul><li>Ábrahám Krisztina</li>\\n<li>Rácz Béla Gergely</li>\\n<li>Vincze Tamás</li>\\n</ul>",
          ),
        ),
      ),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Péter Küllői, </strong>membru fondator al Mosoly Foundation şi chairman al Bátor Tábor Foundation</p>\\r\\n\\r\\n<p><strong>dr. Károly Jókai, </strong>lector universitar al Central European University,&nbsp;director executiv Hungarian-American Fulbright Commission</p>\\r\\n\\r\\n<p><strong>dr. Helen Roberts</strong>, cercetătoare la University College London</p>\\r\\n\\r\\n<p><strong>dr. Rodney Baker, </strong>profesor la London School of Economics</p>\\r\\n\\r\\n<p><strong>dr. Konrad F. Kaschek</strong>, manager Bosch Automotive Electronics din Cluj-Napoca</p>\\r\\n\\r\\n<p><strong>dr. Răzvan Mustaţă, </strong>prodecan al Facultăţii de Ştiinţe Economice şi Gestiunea Afacerilor, UBB</p>\\r\\n\\r\\n<p><strong>András Tombor</strong>, fondatorul şi preşedintele Mathias Corvinus Collegium</p>\\r\\n\\r\\n<p><strong>dr. Malcolm Gillies</strong>, rector la London Metropolitan University</p>\\r\\n\\r\\n<p><strong>dr. László Radácsi </strong>, colaborator ştiinţific al Budapest Business School,&nbsp;fondator şi lider actual al companiei Smartlab Consulting Ltd. din Budapesta</p>\\r\\n\\r\\n<p><strong>Miklós Kerezsi, </strong>director general, proprietar, East Consulting</p>\\r\\n\\r\\n<p><strong>Bálint Molnár, </strong>manager de maketing şi comunicaţii la EIT ICT Labs Budapest</p>\\r\\n\\r\\n<p><strong>dr. Mercé Mach </strong>profesor, University of Barcelona, Faculty of Economics and Business</p>\\r\\n\\r\\n<p><strong>dr. Anna Keszeg</strong>, lector universitar la FSPAC, UBB</p>\\r\\n\\r\\n<p><strong>Zsolt Ábrahám </strong>și <strong>Janka Hoffmann</strong>, members of the Hungarian Business Case Society</p>\\r\\n\\r\\n<p><strong>dr. Magor Kádár</strong>, lector universitar, Universitatea Babeş-Bolyai</p>\\r\\n\\r\\n<p><strong>dr. David Sims</strong>, profesor al City University London – Cass Business School</p>\\r\\n\\r\\n<p><strong>József Takács</strong>, Head of Strategy and Business Development, Vodafone Hungary</p>\\r\\n\\r\\n<p><strong>András Viszkievicz</strong>, Actuarial Analist, Aegon Asigurări, Ungaria</p>\\r\\n\\r\\n<p><strong>dr. David Venter </strong>fostul consultant al lui Nelson Mandela,&nbsp;în prezent profesor la Vlerick Management School din Belgia</p>\\r\\n\\r\\n<p><strong>dr. Daniel Ding, </strong>profesorul de la Universitatea de Stat Ferris din Michigan</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Péter Küllői, </strong>membru fondator al Mosoly Foundation şi chairman al Bátor Tábor Foundation</p>\\n<p><strong>dr. Károly Jókai, </strong>lector universitar al Central European University, director executiv Hungarian-American Fulbright Commission</p>\\n<p><strong>dr. Helen Roberts</strong>, cercetătoare la University College London</p>\\n<p><strong>dr. Rodney Baker, </strong>profesor la London School of Economics</p>\\n<p><strong>dr. Konrad F. Kaschek</strong>, manager Bosch Automotive Electronics din Cluj-Napoca</p>\\n<p><strong>dr. Răzvan Mustaţă, </strong>prodecan al Facultăţii de Ştiinţe Economice şi Gestiunea Afacerilor, UBB</p>\\n<p><strong>András Tombor</strong>, fondatorul şi preşedintele Mathias Corvinus Collegium</p>\\n<p><strong>dr. Malcolm Gillies</strong>, rector la London Metropolitan University</p>\\n<p><strong>dr. László Radácsi </strong>, colaborator ştiinţific al Budapest Business School, fondator şi lider actual al companiei Smartlab Consulting Ltd. din Budapesta</p>\\n<p><strong>Miklós Kerezsi, </strong>director general, proprietar, East Consulting</p>\\n<p><strong>Bálint Molnár, </strong>manager de maketing şi comunicaţii la EIT ICT Labs Budapest</p>\\n<p><strong>dr. Mercé Mach </strong>profesor, University of Barcelona, Faculty of Economics and Business</p>\\n<p><strong>dr. Anna Keszeg</strong>, lector universitar la FSPAC, UBB</p>\\n<p><strong>Zsolt Ábrahám </strong>și <strong>Janka Hoffmann</strong>, members of the Hungarian Business Case Society</p>\\n<p><strong>dr. Magor Kádár</strong>, lector universitar, Universitatea Babeş-Bolyai</p>\\n<p><strong>dr. David Sims</strong>, profesor al City University London – Cass Business School</p>\\n<p><strong>József Takács</strong>, Head of Strategy and Business Development, Vodafone Hungary</p>\\n<p><strong>András Viszkievicz</strong>, Actuarial Analist, Aegon Asigurări, Ungaria</p>\\n<p><strong>dr. David Venter </strong>fostul consultant al lui Nelson Mandela, în prezent profesor la Vlerick Management School din Belgia</p>\\n<p><strong>dr. Daniel Ding, </strong>profesorul de la Universitatea de Stat Ferris din Michigan</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>7th International Management Conference </strong><strong>\\"Managerial Challenges of the Contemporary Society\\" Albert Gáspár - Szász Levente (2014)</strong></p>\\r\\n\\r\\n<p>\\"<em>The impact of servitization on the manufacturer\'s business model and financial performance - a case study of a Romanian pharmaceutical company</em>\\"</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>7th International Management Conference </strong><strong>\\"Managerial Challenges of the Contemporary Society\\" Albert Gáspár - Szász Levente (2014)</strong></p>\\n<p>\\"<em>The impact of servitization on the manufacturer\'s business model and financial performance - a case study of a Romanian pharmaceutical company</em>\\"</p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Czirják Renáta és Székely Rita @ Tipo Holding</p>\\r\\n\\r\\n<p>Kovács Anita és Dombi Tünde @ East Consulting</p>\\r\\n\\r\\n<p>Német Hunor és Kiss Alpár @ Concorde Alapkezelő</p>\\r\\n\\r\\n<p>Fekete Réka és Fehér Attila @ East Grain</p>\\r\\n\\r\\n<p>Albert Gáspár, Guttmann Csongor és Kerekes Zsuzsa @ Romespa</p>\\r\\n\\r\\n<p>Ábrán Csilla @ MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Czirják Renáta és Székely Rita @ Tipo Holding</p>\\n<p>Kovács Anita és Dombi Tünde @ East Consulting</p>\\n<p>Német Hunor és Kiss Alpár @ Concorde Alapkezelő</p>\\n<p>Fekete Réka és Fehér Attila @ East Grain</p>\\n<p>Albert Gáspár, Guttmann Csongor és Kerekes Zsuzsa @ Romespa</p>\\n<p>Ábrán Csilla @ MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1423234858\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1186\',
        \'source\' => \'node/1175\',
        \'alias\' => \'2013-2014\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1123\',
      \'uid\' => \'3\',
      \'title\' => \'Salamon Ádám\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'84abad2c-8808-4b07-bf36-a52ef0deba37\',
      \'nid\' => \'1123\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230487\',
      \'changed\' => \'1423230487\',
      \'tnid\' => \'657\',
      \'translate\' => \'0\',
      \'uuid\' => \'b7e7413a-ecfa-44e0-a831-9dbbd2ae8889\',
      \'revision_timestamp\' => \'1423230487\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Misys Digital Channels, Budapest</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Misys Digital Channels, Budapest</p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Ádám másodéves egyetemi hallgatóként jelentkezett a GTK-ba, amely utólag egyik legjobb döntésének bizonyult. Az elmúlt év történéséit áttekintve Ádám úgy gondolja, hogy nagyon sok versenyen elért pozitív eredményei, munkahelyi kitartása és sikerei, illetve a munkához való pozitív és lelkes hozzáállása nagymértékben a GTK-ban szerzett tapasztalatoknak és az itt gyűjtött tudásnak köszönhető.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Karrierjét egy banki platformokat szolgáltató informatikai cégnél, az IND Groupnál kezdte Junior Projektmenedzserként, majd egy felvásárlás következtében a Misys Digital Channels divíziójában folytatta Projektmendzserként.&nbsp;Jelenleg leginkább a vállalat romániai ügyfeleire koncentrál, több bank esetében fő kapcsolattartó és képviseli a vállalatot, Account Managerként; emellett aktuális ill. új projektek implementációját menedzseli.&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Ádám másodéves egyetemi hallgatóként jelentkezett a GTK-ba, amely utólag egyik legjobb döntésének bizonyult. Az elmúlt év történéséit áttekintve Ádám úgy gondolja, hogy nagyon sok versenyen elért pozitív eredményei, munkahelyi kitartása és sikerei, illetve a munkához való pozitív és lelkes hozzáállása nagymértékben a GTK-ban szerzett tapasztalatoknak és az itt gyűjtött tudásnak köszönhető.</p>\\n<p class=\\"rtejustify\\">Karrierjét egy banki platformokat szolgáltató informatikai cégnél, az IND Groupnál kezdte Junior Projektmenedzserként, majd egy felvásárlás következtében a Misys Digital Channels divíziójában folytatta Projektmendzserként. Jelenleg leginkább a vállalat romániai ügyfeleire koncentrál, több bank esetében fő kapcsolattartó és képviseli a vállalatot, Account Managerként; emellett aktuális ill. új projektek implementációját menedzseli. </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'601\',
            \'uid\' => \'3\',
            \'filename\' => \'salamon_adam.jpg\',
            \'uri\' => \'public://salamon_adam.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32631\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421929844\',
            \'type\' => \'image\',
            \'uuid\' => \'ef9fcf4a-18be-43f7-830e-eb940ccfaf44\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2013 – 2015: BBTE KGTK, mesteri képzés, Vállalati Pénzügyi Menedzsment szakirány</p>\\r\\n\\r\\n<p>2010 – 2013: BBTE KGTK, alapképzés, Pénzügy és Bank szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2013 – 2015: BBTE KGTK, mesteri képzés, Vállalati Pénzügyi Menedzsment szakirány</p>\\n<p>2010 – 2013: BBTE KGTK, alapképzés, Pénzügy és Bank szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Salamon Ádám\',
            \'format\' => NULL,
            \'safe_value\' => \'Salamon Ádám\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2011\',
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
      \'last_comment_timestamp\' => \'1423230487\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1134\',
        \'source\' => \'node/1123\',
        \'alias\' => \'salamon-ádám\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1184\',
      \'uid\' => \'3\',
      \'title\' => \'Török-Dani Renáta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ad9a7b56-f933-4a0d-ab15-c92ad7c31c7e\',
      \'nid\' => \'1184\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1423726850\',
      \'changed\' => \'1423726850\',
      \'tnid\' => \'1184\',
      \'translate\' => \'0\',
      \'uuid\' => \'bbe9875c-fb66-4f08-b78d-5fb3a5d03259\',
      \'revision_timestamp\' => \'1423726850\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Középiskolás Program Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Középiskolás Program Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1007\',
            \'uid\' => \'3\',
            \'filename\' => \'török.reni_.jpg\',
            \'uri\' => \'public://török.reni_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'16967\',
            \'status\' => \'1\',
            \'timestamp\' => \'1423726850\',
            \'type\' => \'image\',
            \'uuid\' => \'ae6eaa0c-d272-4a84-b961-e058952541a7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Török-Dani Renáta\',
            \'format\' => NULL,
            \'safe_value\' => \'Török-Dani Renáta\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Török-Dani Renáta\',
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
      \'last_comment_timestamp\' => \'1423726850\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1195\',
        \'source\' => \'node/1184\',
        \'alias\' => \'török-dani-renáta\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'980\',
      \'uid\' => \'3\',
      \'title\' => \'Orbán Zsolt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'899c2d52-2924-4108-85dd-eaae8d1dae84\',
      \'nid\' => \'980\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423226476\',
      \'changed\' => \'1423226476\',
      \'tnid\' => \'696\',
      \'translate\' => \'0\',
      \'uuid\' => \'be49ff55-9aac-4dcb-9723-08100adcd7ba\',
      \'revision_timestamp\' => \'1423226476\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>business consultant, McKinsey &amp;&nbsp;Company</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>business consultant, McKinsey &amp; Company</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'563\',
            \'uid\' => \'3\',
            \'filename\' => \'orban zsolt Cropped.jpg\',
            \'uri\' => \'public://orban zsolt Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23949\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853616\',
            \'type\' => \'image\',
            \'uuid\' => \'615cf41a-335f-4acf-94da-976b31b505fa\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Orbán Zsolt\',
            \'format\' => NULL,
            \'safe_value\' => \'Orbán Zsolt\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Orbán Zsolt\',
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
      \'last_comment_timestamp\' => \'1423226476\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'991\',
        \'source\' => \'node/980\',
        \'alias\' => \'orbán-zsolt\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'658\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'87252883-9e5a-4249-ba14-6debde8cbbeb\',
      \'nid\' => \'658\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421675934\',
      \'changed\' => \'1421850566\',
      \'tnid\' => \'658\',
      \'translate\' => \'0\',
      \'uuid\' => \'c2aeba48-6c0e-473c-993a-be95d0fcfcab\',
      \'revision_timestamp\' => \'1421850566\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>CEO Viasat Hungaria Zrt, MTG Hungary</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>CEO Viasat Hungaria Zrt, MTG Hungary</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Esettanulmányos múltamnak nagyon sok mindent köszönhetek, egy kitörési- és referenciaponttá vált az életemben. GTK-nak küldetésesnek azon része, amely valami <u>másra </u>kíváncsi diákoknak valami <u>más gyakorlati tapasztalatot </u>kínál egy rendkívülien fontos és hasznos érték.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Esettanulmányos múltamnak nagyon sok mindent köszönhetek, egy kitörési- és referenciaponttá vált az életemben. GTK-nak küldetésesnek azon része, amely valami <u>másra </u>kíváncsi diákoknak valami <u>más gyakorlati tapasztalatot </u>kínál egy rendkívülien fontos és hasznos érték.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'539\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo_andris Cropped.jpg\',
            \'uri\' => \'public://szabo_andris Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25579\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421850566\',
            \'type\' => \'image\',
            \'uuid\' => \'33a0bea2-28ee-4142-a02b-18cab4a4fb50\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>TBBTE KGTK, egyetemi képzés, magyar tagozat,&nbsp;Bank és Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>TBBTE KGTK, egyetemi képzés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szabó András\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2004\',
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
      \'last_comment_timestamp\' => \'1421675934\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'668\',
        \'source\' => \'node/658\',
        \'alias\' => \'szabó-andrás\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1163\',
      \'uid\' => \'3\',
      \'title\' => \'Tasnádi Márta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d8e9d790-2951-4566-ae2e-73686299a21e\',
      \'nid\' => \'1163\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423231071\',
      \'changed\' => \'1423231071\',
      \'tnid\' => \'723\',
      \'translate\' => \'0\',
      \'uuid\' => \'c3b652f5-2eff-4d0d-a7e9-1f007f6c1c94\',
      \'revision_timestamp\' => \'1423231071\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni - Program pentru Liceeni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni - Program pentru Liceeni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'585\',
            \'uid\' => \'3\',
            \'filename\' => \'Tasnádi Cropped.jpg\',
            \'uri\' => \'public://Tasnádi Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32983\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855544\',
            \'type\' => \'image\',
            \'uuid\' => \'134ba7d5-2418-46fc-b6a5-6d96cb5bfb55\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Tasnádi Márta\',
            \'format\' => NULL,
            \'safe_value\' => \'Tasnádi Márta\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Tasnádi Márta\',
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
      \'last_comment_timestamp\' => \'1423231071\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1174\',
        \'source\' => \'node/1163\',
        \'alias\' => \'tasnádi-márta\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1016\',
      \'uid\' => \'3\',
      \'title\' => \'Rácz Béla Gergely\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e1ed8ae3-1f2e-4ef3-98b1-0490ace55923\',
      \'nid\' => \'1016\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423228902\',
      \'changed\' => \'1423228902\',
      \'tnid\' => \'656\',
      \'translate\' => \'0\',
      \'uuid\' => \'c5c1a8bb-be73-4aea-b0fd-fbb84a97093b\',
      \'revision_timestamp\' => \'1423228902\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\r\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'253\',
            \'uid\' => \'3\',
            \'filename\' => \'RaczBela.jpg\',
            \'uri\' => \'public://RaczBela.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34537\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675745\',
            \'type\' => \'image\',
            \'uuid\' => \'a2266b74-ae09-44e7-8ad6-363c3e19734b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés,&nbsp;Vállalati pénzügyi menedzsment&nbsp;szakirány<br />\\r\\n2007-2010: BBTE KGTK, egyetemi&nbsp;kézpés, magyar tagozat, Bank és&nbsp;Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés, Vállalati pénzügyi menedzsment szakirány<br />\\n2007-2010: BBTE KGTK, egyetemi kézpés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Rácz Béla Gergely\',
            \'format\' => NULL,
            \'safe_value\' => \'Rácz Béla Gergely\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Rácz Béla Gergely\',
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
      \'last_comment_timestamp\' => \'1423228902\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1027\',
        \'source\' => \'node/1016\',
        \'alias\' => \'rácz-béla-gergely\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'993\',
      \'uid\' => \'3\',
      \'title\' => \'Takács József\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'757a6f33-4113-420a-8149-862271e1811e\',
      \'nid\' => \'993\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423226885\',
      \'changed\' => \'1423226885\',
      \'tnid\' => \'683\',
      \'translate\' => \'0\',
      \'uuid\' => \'c6dd824b-b08a-442c-bbdf-2a06879e3078\',
      \'revision_timestamp\' => \'1423226885\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Head of Strategy and Business Development, Vodafone Hungary</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Head of Strategy and Business Development, Vodafone Hungary</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'280\',
            \'uid\' => \'3\',
            \'filename\' => \'jozsef takacs.jpg\',
            \'uri\' => \'public://jozsef takacs.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25269\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421677417\',
            \'type\' => \'image\',
            \'uuid\' => \'abcf4418-da2c-4f16-965c-51927d84af9a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Takács József\',
            \'format\' => NULL,
            \'safe_value\' => \'Takács József\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Takács József\',
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
      \'last_comment_timestamp\' => \'1423226885\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1004\',
        \'source\' => \'node/993\',
        \'alias\' => \'takács-józsef\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1180\',
      \'uid\' => \'3\',
      \'title\' => \'2010-2011 \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'df0af3ed-1957-4558-854e-cf1a443f8166\',
      \'nid\' => \'1180\',
      \'type\' => \'result\',
      \'language\' => \'en\',
      \'created\' => \'1423493581\',
      \'changed\' => \'1424262602\',
      \'tnid\' => \'726\',
      \'translate\' => \'0\',
      \'uuid\' => \'cb04b97d-57ec-4815-9043-0c5c0151f3d8\',
      \'revision_timestamp\' => \'1424262602\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">In the 2010/2011 academic year members participated at 8 different case study competitions and got prices. Participated at the ETDK and OTDK scientific conferences and had possibility to participate at trainings.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">In the 2010/2011 academic year members participated at 8 different case study competitions and got prices. Participated at the ETDK and OTDK scientific conferences and had possibility to participate at trainings. </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>3rd Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong> Case Study Competition in Accounting, P</strong><strong>é</strong><strong>cs:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Dénes Laczkó and Tamás Vincze<em> </em>- <strong>I. prize</strong></p>\\r\\n\\r\\n<p><strong>Participation: </strong>Csongor Farkas and Kinga Beáta Szőcs</p>\\r\\n\\r\\n<p><strong>dr. Sus</strong><strong>á</strong><strong>nszky J</strong><strong>á</strong><strong>nos International Case Study Competition, Miskolc:</strong></p>\\r\\n\\r\\n<p>Béla-Gergely Rácz - <strong>the prize for most pragmatic solution</strong></p>\\r\\n\\r\\n<p><strong>10th Open Case Study Competition in Miercurea Ciuc:</strong></p>\\r\\n\\r\\n<p>Dorner Boglárka - Tamara and Szőcs Kinga - Beáta - <strong>II.&nbsp;prize</strong></p>\\r\\n\\r\\n<p>Béla-Gergely Rácz - <strong>II. prize</strong></p>\\r\\n\\r\\n<p><strong>Cluj-Napoca Case Study Competition in 2011, Cluj-Napoca:</strong></p>\\r\\n\\r\\n<p>Dorner Boglárka-Tamara, Erdély Attila,&nbsp;Farkas Csongor and Szőcs Kinga Beáta<em> </em>– <strong>I. prize</strong></p>\\r\\n\\r\\n<p>Ábrahám Krisztina, Major Tamás and Ferencz Hunor – <strong>II.&nbsp;prize</strong></p>\\r\\n\\r\\n<p>Baumgartner Mónika - <strong>III. d</strong><strong>í</strong><strong>j</strong></p>\\r\\n\\r\\n<p>Benkő Zsolt, Demeter Zselyke és László Tímea - <strong>diploma&nbsp;of mention</strong></p>\\r\\n\\r\\n<p><strong>Participation</strong>: Furdek Balázs, Rácz Béla-Gergely</p>\\r\\n\\r\\n<p><strong>9th edition of the National Financial Case Study&nbsp;Competition, Gy</strong><strong>ő</strong><strong>r:</strong></p>\\r\\n\\r\\n<p>Dénes Laczkó <strong>- </strong><strong>II. prize</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>3rd Dr. Papp L</strong><strong>á</strong><strong>szl</strong><strong>ó</strong><strong> Case Study Competition in Accounting, P</strong><strong>é</strong><strong>cs:</strong></p>\\n<p>István Barok, Réka Birton, Dénes Laczkó and Tamás Vincze<em> </em>- <strong>I. prize</strong></p>\\n<p><strong>Participation: </strong>Csongor Farkas and Kinga Beáta Szőcs</p>\\n<p><strong>dr. Sus</strong><strong>á</strong><strong>nszky J</strong><strong>á</strong><strong>nos International Case Study Competition, Miskolc:</strong></p>\\n<p>Béla-Gergely Rácz - <strong>the prize for most pragmatic solution</strong></p>\\n<p><strong>10th Open Case Study Competition in Miercurea Ciuc:</strong></p>\\n<p>Dorner Boglárka - Tamara and Szőcs Kinga - Beáta - <strong>II. prize</strong></p>\\n<p>Béla-Gergely Rácz - <strong>II. prize</strong></p>\\n<p><strong>Cluj-Napoca Case Study Competition in 2011, Cluj-Napoca:</strong></p>\\n<p>Dorner Boglárka-Tamara, Erdély Attila, Farkas Csongor and Szőcs Kinga Beáta<em> </em>– <strong>I. prize</strong></p>\\n<p>Ábrahám Krisztina, Major Tamás and Ferencz Hunor – <strong>II. prize</strong></p>\\n<p>Baumgartner Mónika - <strong>III. d</strong><strong>í</strong><strong>j</strong></p>\\n<p>Benkő Zsolt, Demeter Zselyke és László Tímea - <strong>diploma of mention</strong></p>\\n<p><strong>Participation</strong>: Furdek Balázs, Rácz Béla-Gergely</p>\\n<p><strong>9th edition of the National Financial Case Study Competition, Gy</strong><strong>ő</strong><strong>r:</strong></p>\\n<p>Dénes Laczkó <strong>- </strong><strong>II. prize</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Marketing-Management section:</strong></p>\\r\\n\\r\\n<p>Tamás Major:<strong> </strong><em>From business idea to enterprise. The&nbsp;business plan for developing a sports-centre</em> - <strong>I. prize</strong></p>\\r\\n\\r\\n<p>Boglárka-Tamara Dorner: <em>Application of real options&nbsp;decisions in the product life-cycle model</em> - <strong>II. prize</strong></p>\\r\\n\\r\\n<p>Attila Erdély:<strong> </strong><em>Strategic decision points in the Romanian&nbsp;beef industry</em> - <strong>diploma of mention</strong></p>\\r\\n\\r\\n<p>Csongor Farkas:<strong> </strong><em>Effect of strategic decisions on company&nbsp;value</em></p>\\r\\n\\r\\n<p>Kinga Szőcs:<strong> </strong><em>Evaluation of project management activities.&nbsp;Case study of the Félsziget/Peninsula Festival</em></p>\\r\\n\\r\\n<p><strong>Finances section:</strong></p>\\r\\n\\r\\n<p>Henrietta Dóczi, Attila Erdély, Éva Felfalusi, Renáta&nbsp;Knoch, Enikő Kinga Patka:<strong> </strong><em>Rating systems in Romanian&nbsp;Commercial Banks</em> - <strong>III. prize</strong></p>\\r\\n\\r\\n<p>Dalma-Zsuzsa Farkas, Balázs Furdek, Noémi Marton,&nbsp;Tímea Rácz:<strong> </strong><em>Empirical Analysis of bankruptcy-probability in&nbsp;the case of Romanian Stock-Companies</em> - <strong>diploma of&nbsp;mention</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Marketing-Management section:</strong></p>\\n<p>Tamás Major:<strong> </strong><em>From business idea to enterprise. The business plan for developing a sports-centre</em> - <strong>I. prize</strong></p>\\n<p>Boglárka-Tamara Dorner: <em>Application of real options decisions in the product life-cycle model</em> - <strong>II. prize</strong></p>\\n<p>Attila Erdély:<strong> </strong><em>Strategic decision points in the Romanian beef industry</em> - <strong>diploma of mention</strong></p>\\n<p>Csongor Farkas:<strong> </strong><em>Effect of strategic decisions on company value</em></p>\\n<p>Kinga Szőcs:<strong> </strong><em>Evaluation of project management activities. Case study of the Félsziget/Peninsula Festival</em></p>\\n<p><strong>Finances section:</strong></p>\\n<p>Henrietta Dóczi, Attila Erdély, Éva Felfalusi, Renáta Knoch, Enikő Kinga Patka:<strong> </strong><em>Rating systems in Romanian Commercial Banks</em> - <strong>III. prize</strong></p>\\n<p>Dalma-Zsuzsa Farkas, Balázs Furdek, Noémi Marton, Tímea Rácz:<strong> </strong><em>Empirical Analysis of bankruptcy-probability in the case of Romanian Stock-Companies</em> - <strong>diploma of mention</strong></p>\\n",
          ),
        ),
      ),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>P</strong><strong>é</strong><strong>ter Hajd</strong><strong>ú</strong><strong>, </strong>general manager (Emerging Markets East), Cisco Systems International</p>\\r\\n\\r\\n<p><strong>dr. Christopher Ball, </strong>university professor, MBA program leader, Quinnipiac University</p>\\r\\n\\r\\n<p><strong>E</strong><strong>ö</strong><strong>rs Huba,&nbsp;</strong>managing patner, IFUA Horváth &amp; Partners</p>\\r\\n\\r\\n<p><strong>B</strong><strong>é</strong><strong>la Glattfelder,</strong> member of the European Parliament</p>\\r\\n\\r\\n<p><strong>dr. M</strong><strong>ó</strong><strong>nika Kuti, </strong>assistant professor, University of Pécs</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>P</strong><strong>é</strong><strong>ter Hajd</strong><strong>ú</strong><strong>, </strong>general manager (Emerging Markets East), Cisco Systems International</p>\\n<p><strong>dr. Christopher Ball, </strong>university professor, MBA program leader, Quinnipiac University</p>\\n<p><strong>E</strong><strong>ö</strong><strong>rs Huba, </strong>managing patner, IFUA Horváth &amp; Partners</p>\\n<p><strong>B</strong><strong>é</strong><strong>la Glattfelder,</strong> member of the European Parliament</p>\\n<p><strong>dr. M</strong><strong>ó</strong><strong>nika Kuti, </strong>assistant professor, University of Pécs</p>\\n",
          ),
        ),
      ),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>4. \\"Managerial Challenges of the Contemporary Society\\":&nbsp;Barok István és Dorner Boglárka (2011):</strong> <em>Food Industry Suppliers\' Management Strategies During the Economic Crisis</em></p>\\r\\n\\r\\n<p><strong>8th Central European Conference: „New Developments in Strategic Management” work section:</strong> <strong>Dorner Boglárka, Erdély Attila, Farkas Csongor és Szőcs Kinga</strong></p>\\r\\n\\r\\n<p><strong>„Champions\' League” – Social Sciences Conference:</strong>&nbsp;István Barok, Boglárka-Tamara Dorner:<strong> </strong><em>Food Industry Suppliers\' Crisis Management – the Romchemicals Ltd. case</em>. <strong>Second place</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>4. \\"Managerial Challenges of the Contemporary Society\\": Barok István és Dorner Boglárka (2011):</strong> <em>Food Industry Suppliers\' Management Strategies During the Economic Crisis</em></p>\\n<p><strong>8th Central European Conference: „New Developments in Strategic Management” work section:</strong> <strong>Dorner Boglárka, Erdély Attila, Farkas Csongor és Szőcs Kinga</strong></p>\\n<p><strong>„Champions\' League” – Social Sciences Conference:</strong> István Barok, Boglárka-Tamara Dorner:<strong> </strong><em>Food Industry Suppliers\' Crisis Management – the Romchemicals Ltd. case</em>. <strong>Second place</strong></p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Business Financing section:&nbsp;</strong>Márta Lőrincz <strong>– </strong><strong>II. prize</strong></p>\\r\\n\\r\\n<p><strong>Strategic Management:&nbsp;</strong>Dénes Laczkó and Tamás Vincze<strong> – </strong><strong>II. prize</strong></p>\\r\\n\\r\\n<p><strong>Participation:&nbsp;</strong>István Barok, Boglárka Dorner</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Business Financing section: </strong>Márta Lőrincz <strong>– </strong><strong>II. prize</strong></p>\\n<p><strong>Strategic Management: </strong>Dénes Laczkó and Tamás Vincze<strong> – </strong><strong>II. prize</strong></p>\\n<p><strong>Participation: </strong>István Barok, Boglárka Dorner</p>\\n",
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
      \'last_comment_timestamp\' => \'1423493581\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1191\',
        \'source\' => \'node/1180\',
        \'alias\' => \'2010-2011\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1017\',
      \'uid\' => \'3\',
      \'title\' => \'Rácz Béla Gergely\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'45439af0-984d-42f9-bee0-e09f31cb3e88\',
      \'nid\' => \'1017\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423228915\',
      \'changed\' => \'1423228915\',
      \'tnid\' => \'656\',
      \'translate\' => \'0\',
      \'uuid\' => \'cb4c54c1-c521-4719-acea-14c4fdc98459\',
      \'revision_timestamp\' => \'1423228915\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\r\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'253\',
            \'uid\' => \'3\',
            \'filename\' => \'RaczBela.jpg\',
            \'uri\' => \'public://RaczBela.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34537\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675745\',
            \'type\' => \'image\',
            \'uuid\' => \'a2266b74-ae09-44e7-8ad6-363c3e19734b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés,&nbsp;Vállalati pénzügyi menedzsment&nbsp;szakirány<br />\\r\\n2007-2010: BBTE KGTK, egyetemi&nbsp;kézpés, magyar tagozat, Bank és&nbsp;Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés, Vállalati pénzügyi menedzsment szakirány<br />\\n2007-2010: BBTE KGTK, egyetemi kézpés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Rácz Béla Gergely\',
            \'format\' => NULL,
            \'safe_value\' => \'Rácz Béla Gergely\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Rácz Béla Gergely\',
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
      \'last_comment_timestamp\' => \'1423228915\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1028\',
        \'source\' => \'node/1017\',
        \'alias\' => \'rácz-béla-gergely\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1056\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Rita\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'baf014ea-a929-4389-a0ee-e97f114627a3\',
      \'nid\' => \'1056\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423229768\',
      \'changed\' => \'1423229768\',
      \'tnid\' => \'904\',
      \'translate\' => \'0\',
      \'uuid\' => \'cd060925-c5b6-4308-81f3-ce1fe6f9f053\',
      \'revision_timestamp\' => \'1423229768\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'526\',
            \'uid\' => \'3\',
            \'filename\' => \'SzékelyRita Cropped.jpg\',
            \'uri\' => \'public://SzékelyRita Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'44330\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848090\',
            \'type\' => \'image\',
            \'uuid\' => \'372fce4b-ee57-4bba-aded-ffc4404f688b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Székely Rita\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Rita\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Székely Rita\',
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
      \'last_comment_timestamp\' => \'1423229768\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1067\',
        \'source\' => \'node/1056\',
        \'alias\' => \'székely-rita\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'722\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Linda\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1588e61c-6f8c-404d-9d3f-cb9307e94f08\',
      \'nid\' => \'722\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421680573\',
      \'changed\' => \'1421855492\',
      \'tnid\' => \'722\',
      \'translate\' => \'0\',
      \'uuid\' => \'d41b4727-a772-4888-ba6d-fb028b6e1ba1\',
      \'revision_timestamp\' => \'1421855492\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Középiskolás Program Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Középiskolás Program Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'584\',
            \'uid\' => \'3\',
            \'filename\' => \'SzekelyL Cropped.jpg\',
            \'uri\' => \'public://SzekelyL Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31919\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855492\',
            \'type\' => \'image\',
            \'uuid\' => \'d7149b07-78d3-4e9e-8a28-a6fa689a4e0e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Székely Linda\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Linda\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Székely Linda\',
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
      \'last_comment_timestamp\' => \'1421680573\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'732\',
        \'source\' => \'node/722\',
        \'alias\' => \'székely-linda\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1001\',
      \'uid\' => \'3\',
      \'title\' => \'Zala Ákos\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f58d565a-342b-4ae0-989c-731439a29e1c\',
      \'nid\' => \'1001\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423227395\',
      \'changed\' => \'1423227395\',
      \'tnid\' => \'705\',
      \'translate\' => \'0\',
      \'uuid\' => \'d772a8d4-cd04-4988-8017-096700d07ac3\',
      \'revision_timestamp\' => \'1423227395\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>director general, Human Telex Consulting</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>director general, Human Telex Consulting</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'566\',
            \'uid\' => \'3\',
            \'filename\' => \'zala_akos Cropped.jpg\',
            \'uri\' => \'public://zala_akos Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'19087\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853729\',
            \'type\' => \'image\',
            \'uuid\' => \'fa441c43-392e-47ba-a92e-c268653e11b8\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Zala Ákos\',
            \'format\' => NULL,
            \'safe_value\' => \'Zala Ákos\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Zala Ákos\',
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
      \'last_comment_timestamp\' => \'1423227395\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1012\',
        \'source\' => \'node/1001\',
        \'alias\' => \'zala-ákos\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'663\',
      \'uid\' => \'3\',
      \'title\' => \'Szakács Szilárd\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f43caf6c-cd30-4f22-8912-d7a07b8bfa52\',
      \'nid\' => \'663\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421676382\',
      \'changed\' => \'1421676382\',
      \'tnid\' => \'663\',
      \'translate\' => \'0\',
      \'uuid\' => \'d7c4dbd0-c454-4f9a-b1c2-4ce83124cc36\',
      \'revision_timestamp\' => \'1421676382\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MIG Bank Ltd, Lausanne, Svájc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MIG Bank Ltd, Lausanne, Svájc</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Szilárd egy tanéven keresztül (2009-2010) volt tagja a Gazdasági Tanácsadó Klubnak és úgy véli, hogy az egyetemi évek alatt egyik legjobb döntése volt a GTK-ba való belépése. Véleménye szerint a GTK alapos felkészítést biztosít, amely során olyan tudással gazdagodnak tagjai, mely nélkülözhetetlen a sikeres karrierépítéshez.<br />\\r\\nAz egyetemi évek alatt Szilárd nagy rajongója volt az egyetemen kívüli tevékenységeknek, versenyeknek. Részt vett közel 10 esettanulmány versenyen és 5 esetben díjazták. Több szakmai publikációja is megjelent, valamint egy ETDK-s 1. díjjal, valamint egy OTDK-s 3. díjjal is büszkélkedhet.<br />\\r\\nSzilárd 2008-tól aktív a munkaerőpiacon, 3 évig a Kárpátia Magyar-Román Kereskedelmi és Iparkamaránál, majd a marosvásárhelyi MarsoRom Kft-nél tevékenykedett. 2011 októberétől a svájci MIG Banknál a Közép-Kelet Európai régióra kiterjedő értékesítői, elemzői és piackutatási feladatokat látja el.<br />\\r\\nSzilárd nagy CFR rajongó, szereti a sportot és a társaságot.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Szilárd egy tanéven keresztül (2009-2010) volt tagja a Gazdasági Tanácsadó Klubnak és úgy véli, hogy az egyetemi évek alatt egyik legjobb döntése volt a GTK-ba való belépése. Véleménye szerint a GTK alapos felkészítést biztosít, amely során olyan tudással gazdagodnak tagjai, mely nélkülözhetetlen a sikeres karrierépítéshez.<br />\\nAz egyetemi évek alatt Szilárd nagy rajongója volt az egyetemen kívüli tevékenységeknek, versenyeknek. Részt vett közel 10 esettanulmány versenyen és 5 esetben díjazták. Több szakmai publikációja is megjelent, valamint egy ETDK-s 1. díjjal, valamint egy OTDK-s 3. díjjal is büszkélkedhet.<br />\\nSzilárd 2008-tól aktív a munkaerőpiacon, 3 évig a Kárpátia Magyar-Román Kereskedelmi és Iparkamaránál, majd a marosvásárhelyi MarsoRom Kft-nél tevékenykedett. 2011 októberétől a svájci MIG Banknál a Közép-Kelet Európai régióra kiterjedő értékesítői, elemzői és piackutatási feladatokat látja el.<br />\\nSzilárd nagy CFR rajongó, szereti a sportot és a társaságot.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'260\',
            \'uid\' => \'3\',
            \'filename\' => \'szsz.jpg\',
            \'uri\' => \'public://szsz.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'70828\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676382\',
            \'type\' => \'image\',
            \'uuid\' => \'724f6db4-e391-4a2f-a5e3-c5b5978d9b27\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'188\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'188\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2005-2008: BBTE KGTK, egyetemi képzés, Bank és Pénzügy.<br />\\r\\n2008-2010: BBTE KGTK, mesteri képzés, Projektmenedzsment és –értékelés.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2005-2008: BBTE KGTK, egyetemi képzés, Bank és Pénzügy.<br />\\n2008-2010: BBTE KGTK, mesteri képzés, Projektmenedzsment és –értékelés.</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Szakács Szilárd\',
            \'format\' => NULL,
            \'safe_value\' => \'Szakács Szilárd\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
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
      \'last_comment_timestamp\' => \'1421676382\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'673\',
        \'source\' => \'node/663\',
        \'alias\' => \'szakács-szilárd\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1189\',
      \'uid\' => \'3\',
      \'title\' => \'2007-2008\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'08ed7456-2523-4d30-a19e-1615f9c7dfc3\',
      \'nid\' => \'1189\',
      \'type\' => \'result\',
      \'language\' => \'en\',
      \'created\' => \'1424174134\',
      \'changed\' => \'1424263430\',
      \'tnid\' => \'1188\',
      \'translate\' => \'0\',
      \'uuid\' => \'d8ba5d25-5f9d-4b5f-bbe2-1500c8a534cb\',
      \'revision_timestamp\' => \'1424263430\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2007/2008 academic year was the&nbsp;year of foundation.Started the&nbsp;implementation of the Management Shadowing pilot program.&nbsp;In addition, the members have performed excellently in the competitions.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2007/2008 academic year was the year of foundation.Started the implementation of the Management Shadowing pilot program. In addition, the members have performed excellently in the competitions.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_competitions_result\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>7th National Financial Case Study Competition, Győr:</strong></p>\\r\\n\\r\\n<p>Katalin Ferencz, Szilárd Szakács and Levente Szász -<strong>&nbsp;II. prize</strong></p>\\r\\n\\r\\n<p><strong>10th National Case Study Competition, Budapest:</strong></p>\\r\\n\\r\\n<p>Katalin Ferencz, Szilárd Szakács and Levente Szász - <strong>participation</strong></p>\\r\\n\\r\\n<p><strong>Global Management Challenge (GMC):</strong></p>\\r\\n\\r\\n<p>Katalin Ferencz, Szilárd Szakács, Levente Szász and Tímea László managed to qualify to the first 16 out of 64 Romanian teams.</p>\\r\\n\\r\\n<p><strong>Romanian Case Study Competition organized by the Babes-Bolyai University:</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Márta Lőrincz and Tamás Vincze - <strong>I. prize</strong></p>\\r\\n\\r\\n<p><strong>16th National Case Study Competition, Cluj Napoca:</strong></p>\\r\\n\\r\\n<p>Szilárd Szakács -&nbsp;<strong>I. prize</strong></p>\\r\\n\\r\\n<p>Dénes Laczkó - <strong>mention</strong></p>\\r\\n\\r\\n<p>István Barok, Réka Birton, Márta Lőrincz and Tamás Vincze - <strong>participation</strong></p>\\r\\n\\r\\n<p><strong>7th Open Case Study Competition in Miercurea Ciuc:</strong></p>\\r\\n\\r\\n<p>István Barok, and Márta Lőrincz - <strong>participation</strong></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>7th National Financial Case Study Competition, Győr:</strong></p>\\n<p>Katalin Ferencz, Szilárd Szakács and Levente Szász -<strong> II. prize</strong></p>\\n<p><strong>10th National Case Study Competition, Budapest:</strong></p>\\n<p>Katalin Ferencz, Szilárd Szakács and Levente Szász - <strong>participation</strong></p>\\n<p><strong>Global Management Challenge (GMC):</strong></p>\\n<p>Katalin Ferencz, Szilárd Szakács, Levente Szász and Tímea László managed to qualify to the first 16 out of 64 Romanian teams.</p>\\n<p><strong>Romanian Case Study Competition organized by the Babes-Bolyai University:</strong></p>\\n<p>István Barok, Réka Birton, Márta Lőrincz and Tamás Vincze - <strong>I. prize</strong></p>\\n<p><strong>16th National Case Study Competition, Cluj Napoca:</strong></p>\\n<p>Szilárd Szakács - <strong>I. prize</strong></p>\\n<p>Dénes Laczkó - <strong>mention</strong></p>\\n<p>István Barok, Réka Birton, Márta Lőrincz and Tamás Vincze - <strong>participation</strong></p>\\n<p><strong>7th Open Case Study Competition in Miercurea Ciuc:</strong></p>\\n<p>István Barok, and Márta Lőrincz - <strong>participation</strong></p>\\n",
          ),
        ),
      ),
      \'field_etdk_result\' => array(),
      \'field_highschool_program\' => array(),
      \'field_lecturers_list\' => array(),
      \'field_management_conference\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Publications:</p>\\r\\n\\r\\n<p>Tamás Bálint and Attila Lőrinczi’s publication (with co-author) in the Economist Forum / Közgazdász Fórum (November 2007)</p>\\r\\n\\r\\n<p>Szilárd Szakács’ publication (with co-author) in the Economist Forum / Közgazdász Fórum (June 2008)</p>\\r\\n\\r\\n<p>3 publications by Levente Szász (one paper with co-author) in the Economist Forum / Közgazdász Fórum (May, June, August 2008)</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Publications:</p>\\n<p>Tamás Bálint and Attila Lőrinczi’s publication (with co-author) in the Economist Forum / Közgazdász Fórum (November 2007)</p>\\n<p>Szilárd Szakács’ publication (with co-author) in the Economist Forum / Közgazdász Fórum (June 2008)</p>\\n<p>3 publications by Levente Szász (one paper with co-author) in the Economist Forum / Közgazdász Fórum (May, June, August 2008)</p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_management_shadowing\' => array(),
      \'field_otdk_result\' => array(),
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
      \'last_comment_timestamp\' => \'1424174134\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1200\',
        \'source\' => \'node/1189\',
        \'alias\' => \'2007-2008\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'998\',
      \'uid\' => \'3\',
      \'title\' => \'Záboji Péter\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'98a747be-be5e-47d2-85c3-364607cefa07\',
      \'nid\' => \'998\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423227332\',
      \'changed\' => \'1423227332\',
      \'tnid\' => \'697\',
      \'translate\' => \'0\',
      \'uuid\' => \'d9c52161-1afd-41f2-989f-ad4fae19aab7\',
      \'revision_timestamp\' => \'1423227332\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>preşedinte, European Entrepreneurship Foundation</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>preşedinte, European Entrepreneurship Foundation</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'569\',
            \'uid\' => \'3\',
            \'filename\' => \'Peter B Zaboji  Cropped.jpg\',
            \'uri\' => \'public://Peter B Zaboji  Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30452\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853780\',
            \'type\' => \'image\',
            \'uuid\' => \'00859df5-41bc-41dd-89ef-0f9be693e683\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Záboji Péter\',
            \'format\' => NULL,
            \'safe_value\' => \'Záboji Péter\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Záboji Péter\',
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
      \'last_comment_timestamp\' => \'1423227332\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1009\',
        \'source\' => \'node/998\',
        \'alias\' => \'záboji-péter\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'694\',
      \'uid\' => \'3\',
      \'title\' => \'Molnár Bálint\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'321b0a76-d5c8-4e44-8734-08d3e5010c5a\',
      \'nid\' => \'694\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421677807\',
      \'changed\' => \'1421853559\',
      \'tnid\' => \'694\',
      \'translate\' => \'0\',
      \'uuid\' => \'da89cedc-7798-41c6-b839-aea1b773150a\',
      \'revision_timestamp\' => \'1421853559\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>EIT ICT Labs Budapest marketing és kommunikációs igazgatója</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>EIT ICT Labs Budapest marketing és kommunikációs igazgatója</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'562\',
            \'uid\' => \'3\',
            \'filename\' => \'MolnarB Cropped.jpg\',
            \'uri\' => \'public://MolnarB Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25231\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853559\',
            \'type\' => \'image\',
            \'uuid\' => \'0e215cd4-38ca-402c-bf7b-a4d470d31a1f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Molnár Bálint\',
            \'format\' => NULL,
            \'safe_value\' => \'Molnár Bálint\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Molnár Bálint\',
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
      \'last_comment_timestamp\' => \'1421677807\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'704\',
        \'source\' => \'node/694\',
        \'alias\' => \'molnár-bálint\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1058\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó S. Zsolt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2466781e-1d24-4240-8a9e-2c0259686187\',
      \'nid\' => \'1058\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423229788\',
      \'changed\' => \'1423229788\',
      \'tnid\' => \'903\',
      \'translate\' => \'0\',
      \'uuid\' => \'db3f378b-db93-44f2-b1dd-07f6312e78a9\',
      \'revision_timestamp\' => \'1423229788\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'525\',
            \'uid\' => \'3\',
            \'filename\' => \'szabó_zsolt Cropped.jpg\',
            \'uri\' => \'public://szabó_zsolt Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'16642\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848087\',
            \'type\' => \'image\',
            \'uuid\' => \'b328c9b8-b0fa-4a20-96bb-5156bc4883c9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>BBTE</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>BBTE</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Szabó S. Zsolt\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó S. Zsolt\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
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
      \'last_comment_timestamp\' => \'1423229788\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1069\',
        \'source\' => \'node/1058\',
        \'alias\' => \'szabó-s-zsolt\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1161\',
      \'uid\' => \'3\',
      \'title\' => \'Tóth Klára\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0e16844e-55ff-4bf0-9cfb-4c146ed82005\',
      \'nid\' => \'1161\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423231046\',
      \'changed\' => \'1423231046\',
      \'tnid\' => \'724\',
      \'translate\' => \'0\',
      \'uuid\' => \'dbbd1ce9-0a70-4be1-a606-b1bbb5f627ca\',
      \'revision_timestamp\' => \'1423231046\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Highschool alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Highschool alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'586\',
            \'uid\' => \'3\',
            \'filename\' => \'Toth_Klári Cropped.jpg\',
            \'uri\' => \'public://Toth_Klári Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31457\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855548\',
            \'type\' => \'image\',
            \'uuid\' => \'dffa683b-0288-4570-ae23-280670f8eeb9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'266\',
              \'height\' => \'266\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'266\',
            \'height\' => \'266\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Tóth Klára\',
            \'format\' => NULL,
            \'safe_value\' => \'Tóth Klára\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Tóth Klára\',
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
      \'last_comment_timestamp\' => \'1423231046\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1172\',
        \'source\' => \'node/1161\',
        \'alias\' => \'tóth-klára\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1049\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Hunor Györk\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'65e559e1-32d6-4ac1-bcc9-9a247556a4e5\',
      \'nid\' => \'1049\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423229663\',
      \'changed\' => \'1423229663\',
      \'tnid\' => \'902\',
      \'translate\' => \'0\',
      \'uuid\' => \'dc9f73b5-1ecc-4208-a0e0-31a8f6c7966a\',
      \'revision_timestamp\' => \'1423229663\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Junior\',
            \'format\' => NULL,
            \'safe_value\' => \'Junior\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Hunor,&nbsp;3 év mérnöki képzés után kezdett el tanulni a jelenlegi szakirányon, ahol sikeresen felvételizett a GTK-ba, annak érdekében, hogy a lehető legjobb körülmények között kapja a lehető legjobb képzést.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Hunor, 3 év mérnöki képzés után kezdett el tanulni a jelenlegi szakirányon, ahol sikeresen felvételizett a GTK-ba, annak érdekében, hogy a lehető legjobb körülmények között kapja a lehető legjobb képzést.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'522\',
            \'uid\' => \'3\',
            \'filename\' => \'nagyhunor Cropped.jpg\',
            \'uri\' => \'public://nagyhunor Cropped_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20593\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421848048\',
            \'type\' => \'image\',
            \'uuid\' => \'ff0c7d4e-c16a-4782-b61d-a99996e2269f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2014-: BBTE KGTK, egyetemi kézpés, magyar tagozat,&nbsp; Menedzsment</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2014-: BBTE KGTK, egyetemi kézpés, magyar tagozat,  Menedzsment</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Nagy Hunor Györk\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Hunor Györk\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Hunor Györk\',
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
      \'last_comment_timestamp\' => \'1423229663\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1060\',
        \'source\' => \'node/1049\',
        \'alias\' => \'nagy-hunor-györk\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1117\',
      \'uid\' => \'3\',
      \'title\' => \'Rácz Béla Gergely\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'abc16266-1077-467e-9537-4e585248e6cc\',
      \'nid\' => \'1117\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230455\',
      \'changed\' => \'1423230455\',
      \'tnid\' => \'912\',
      \'translate\' => \'0\',
      \'uuid\' => \'dfc8096d-0c5d-41bf-bb06-61d55e0bf74c\',
      \'revision_timestamp\' => \'1423230455\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>MarsoRom</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>MarsoRom</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Coordinator\',
            \'format\' => NULL,
            \'safe_value\' => \'Coordinator\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\r\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Béci az iskola elvégézese után szinte teljesen biztos volt abban, hogy bölcsész lesz. „Miért is ne?” alapon, vagy talán csak a biztonság kedvéért, de beiratkozott közgázra is...<br />\\nAzt, hogy végül mégis közgazdász lett elsősorban a GTK-nak köszönheti, hiszen GTK-sként fedezte fel a művészetet, a profán mellett a szentet, a ma már gyakorolt szakmájában.</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'591\',
            \'uid\' => \'3\',
            \'filename\' => \'RaczBela.jpg\',
            \'uri\' => \'public://RaczBela_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34537\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421856117\',
            \'type\' => \'image\',
            \'uuid\' => \'028c5f63-b4cd-409a-a2c6-efec36b7930d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés,&nbsp;Vállalati pénzügyi menedzsment&nbsp;szakirány<br />\\r\\n2007-2010: BBTE KGTK, egyetemi&nbsp;kézpés, magyar tagozat, Bank és&nbsp;Pénzügy szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010-2012: BBTE KGTK, mesteri kézpés, Vállalati pénzügyi menedzsment szakirány<br />\\n2007-2010: BBTE KGTK, egyetemi kézpés, magyar tagozat, Bank és Pénzügy szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Rácz Béla Gergely\',
            \'format\' => NULL,
            \'safe_value\' => \'Rácz Béla Gergely\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
          ),
        ),
      ),
      \'title_original\' => \'Rácz Béla Gergely\',
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
      \'last_comment_timestamp\' => \'1423230455\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1128\',
        \'source\' => \'node/1117\',
        \'alias\' => \'rácz-béla-gergely-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'719\',
      \'uid\' => \'3\',
      \'title\' => \'Nagy Réka\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'52750c80-9313-4caa-9ef1-33247b29ed78\',
      \'nid\' => \'719\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421680443\',
      \'changed\' => \'1421680443\',
      \'tnid\' => \'719\',
      \'translate\' => \'0\',
      \'uuid\' => \'dfd0a9a8-fb39-4394-a4e8-928b22221436\',
      \'revision_timestamp\' => \'1421680443\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Középiskolás Program Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Középiskolás Program Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'318\',
            \'uid\' => \'3\',
            \'filename\' => \'Nagy_Reka.jpg\',
            \'uri\' => \'public://Nagy_Reka.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'36369\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421680443\',
            \'type\' => \'image\',
            \'uuid\' => \'56fcd732-7a60-4d7a-8b03-f93489faf756\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'241\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'241\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Nagy Réka\',
            \'format\' => NULL,
            \'safe_value\' => \'Nagy Réka\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Nagy Réka\',
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
      \'last_comment_timestamp\' => \'1421680443\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'729\',
        \'source\' => \'node/719\',
        \'alias\' => \'nagy-réka\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1157\',
      \'uid\' => \'3\',
      \'title\' => \'Szabó Júlia\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c253fc34-cd51-4dc1-963a-e79b2089b2f2\',
      \'nid\' => \'1157\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230972\',
      \'changed\' => \'1423230972\',
      \'tnid\' => \'721\',
      \'translate\' => \'0\',
      \'uuid\' => \'e1e04c03-fb47-4599-a13e-562515701591\',
      \'revision_timestamp\' => \'1423230972\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni - Program pentru Liceeni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni - Program pentru Liceeni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'583\',
            \'uid\' => \'3\',
            \'filename\' => \'szabo Cropped.jpg\',
            \'uri\' => \'public://szabo Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'34950\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421855489\',
            \'type\' => \'image\',
            \'uuid\' => \'0b570aaa-bc44-47c1-9624-05ac76d81c41\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Szabó Júlia\',
            \'format\' => NULL,
            \'safe_value\' => \'Szabó Júlia\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Szabó Júlia\',
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
      \'last_comment_timestamp\' => \'1423230972\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1168\',
        \'source\' => \'node/1157\',
        \'alias\' => \'szabó-júlia\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'703\',
      \'uid\' => \'3\',
      \'title\' => \'Tombor András\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7993129d-0440-4fef-8683-bc664cb87446\',
      \'nid\' => \'703\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421678272\',
      \'changed\' => \'1421853749\',
      \'tnid\' => \'703\',
      \'translate\' => \'0\',
      \'uuid\' => \'e53d15fd-88c0-4d6f-9fa5-920107baa4fc\',
      \'revision_timestamp\' => \'1421853749\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>a Mathias Corvinus Kollégium alapítója</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>a Mathias Corvinus Kollégium alapítója</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'567\',
            \'uid\' => \'3\',
            \'filename\' => \'tombor-andrás-kiemelt Cropped.jpg\',
            \'uri\' => \'public://tombor-andrás-kiemelt Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25391\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853749\',
            \'type\' => \'image\',
            \'uuid\' => \'768a3d12-881d-4f19-95c6-db94ede8c6b9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Tombor András\',
            \'format\' => NULL,
            \'safe_value\' => \'Tombor András\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Tombor András\',
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
      \'last_comment_timestamp\' => \'1421678272\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'713\',
        \'source\' => \'node/703\',
        \'alias\' => \'tombor-andrás\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1131\',
      \'uid\' => \'3\',
      \'title\' => \'Székely Krisztián\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'00ead1e6-bdb9-404e-b354-a903e54fc34f\',
      \'nid\' => \'1131\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230571\',
      \'changed\' => \'1423230571\',
      \'tnid\' => \'661\',
      \'translate\' => \'0\',
      \'uuid\' => \'e837daa6-178b-45ef-9d2f-07e4a83582c1\',
      \'revision_timestamp\' => \'1423230571\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Chimszed Invest SRL</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Chimszed Invest SRL</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'258\',
            \'uid\' => \'3\',
            \'filename\' => \'szkr.jpg\',
            \'uri\' => \'public://szkr.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'44259\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676220\',
            \'type\' => \'image\',
            \'uuid\' => \'cbc5aea2-0264-40b5-8cbd-348bbb424beb\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'167\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'167\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vállalkozásmenedzsment - MSc<br />\\r\\nMenedzsment - BSc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Vállalkozásmenedzsment - MSc<br />\\nMenedzsment - BSc</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Székely Krisztián\',
            \'format\' => NULL,
            \'safe_value\' => \'Székely Krisztián\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2009\',
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
      \'last_comment_timestamp\' => \'1423230571\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1142\',
        \'source\' => \'node/1131\',
        \'alias\' => \'székely-krisztián\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1186\',
      \'uid\' => \'3\',
      \'title\' => \'Török-Dani Renáta\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'776174ed-e9c5-4870-93f0-c662a72d5fa5\',
      \'nid\' => \'1186\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423726906\',
      \'changed\' => \'1423726906\',
      \'tnid\' => \'1184\',
      \'translate\' => \'0\',
      \'uuid\' => \'ee2955e1-db05-49d6-a3bf-1c9274e71b6e\',
      \'revision_timestamp\' => \'1423726906\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni - Program pentru Liceeni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni - Program pentru Liceeni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1007\',
            \'uid\' => \'3\',
            \'filename\' => \'török.reni_.jpg\',
            \'uri\' => \'public://török.reni_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'16967\',
            \'status\' => \'1\',
            \'timestamp\' => \'1423726850\',
            \'type\' => \'image\',
            \'uuid\' => \'ae6eaa0c-d272-4a84-b961-e058952541a7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Török-Dani Renáta\',
            \'format\' => NULL,
            \'safe_value\' => \'Török-Dani Renáta\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014\',
          ),
        ),
      ),
      \'title_original\' => \'Török-Dani Renáta\',
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
      \'last_comment_timestamp\' => \'1423726906\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1197\',
        \'source\' => \'node/1186\',
        \'alias\' => \'török-dani-renáta\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'696\',
      \'uid\' => \'3\',
      \'title\' => \'Orbán Zsolt\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f3043fc1-de14-48bf-924c-f4f1d8e48f0d\',
      \'nid\' => \'696\',
      \'type\' => \'person\',
      \'language\' => \'hu\',
      \'created\' => \'1421677900\',
      \'changed\' => \'1421853616\',
      \'tnid\' => \'696\',
      \'translate\' => \'0\',
      \'uuid\' => \'efce56ac-732d-404f-b310-32c80cfcbab1\',
      \'revision_timestamp\' => \'1421853616\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>tanácsadó, McKinsey &amp; Company</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>tanácsadó, McKinsey &amp; Company</p>\\n",
          ),
        ),
      ),
      \'field_job\' => array(),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(),
      \'field_other_thoughts\' => array(),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'563\',
            \'uid\' => \'3\',
            \'filename\' => \'orban zsolt Cropped.jpg\',
            \'uri\' => \'public://orban zsolt Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23949\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421853616\',
            \'type\' => \'image\',
            \'uuid\' => \'615cf41a-335f-4acf-94da-976b31b505fa\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'hu\' => array(
          array(
            \'value\' => \'Orbán Zsolt\',
            \'format\' => NULL,
            \'safe_value\' => \'Orbán Zsolt\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Orbán Zsolt\',
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
      \'last_comment_timestamp\' => \'1421677900\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'706\',
        \'source\' => \'node/696\',
        \'alias\' => \'orbán-zsolt\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1128\',
      \'uid\' => \'3\',
      \'title\' => \'Vincze Tamás\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'04952a22-5efc-4dde-bb31-8f976f0146d7\',
      \'nid\' => \'1128\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423230544\',
      \'changed\' => \'1423230544\',
      \'tnid\' => \'664\',
      \'translate\' => \'0\',
      \'uuid\' => \'f1b67784-1f09-42fc-b6cc-2b0cb1569070\',
      \'revision_timestamp\' => \'1423230544\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>East Grain SRL – kereskedelmi igazgató</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>East Grain SRL – kereskedelmi igazgató</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Tamás közgázas életének első évében jelentkezett a GTK-ba, aminek minden lépcsőfokát végigjárta: a rendes tagi státusztól, szeniori, majd rövid időre a szervezet koordinátor helyettesi pozíciójáig jutott el. Jelenleg az alumni tagok egyre bővülő listáját gyarapítja.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A GTK-nak elsősorban a munkához való pozitív hozzáállást és a rendszerben való gondolkodást köszönheti - meg természetesen egy sokoldalú szakmai és baráti közösséghez való tartozást.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Karrierét a piackutató és tanácsadó ágazatban kezdte, de dolgozott a megújuló-energia ágazatban, turizmusban és a bankrendszerben is. Jelenleg gabona kereskedőként igyekszik kamatoztatni a főképp GTK-ban szerzett sokszínű gazdasági ismereteit</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Tamás közgázas életének első évében jelentkezett a GTK-ba, aminek minden lépcsőfokát végigjárta: a rendes tagi státusztól, szeniori, majd rövid időre a szervezet koordinátor helyettesi pozíciójáig jutott el. Jelenleg az alumni tagok egyre bővülő listáját gyarapítja.</p>\\n<p class=\\"rtejustify\\">A GTK-nak elsősorban a munkához való pozitív hozzáállást és a rendszerben való gondolkodást köszönheti - meg természetesen egy sokoldalú szakmai és baráti közösséghez való tartozást.</p>\\n<p class=\\"rtejustify\\">Karrierét a piackutató és tanácsadó ágazatban kezdte, de dolgozott a megújuló-energia ágazatban, turizmusban és a bankrendszerben is. Jelenleg gabona kereskedőként igyekszik kamatoztatni a főképp GTK-ban szerzett sokszínű gazdasági ismereteit</p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'261\',
            \'uid\' => \'3\',
            \'filename\' => \'vt.jpg\',
            \'uri\' => \'public://vt.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30061\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421676448\',
            \'type\' => \'image\',
            \'uuid\' => \'1f3714d5-2e79-4409-85db-ebb7736c276e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'175\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'175\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>2010 – 2012: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalati Pénzügyi Menedzsment szakirány&nbsp;<br />\\r\\n2007 – 2010: BBTE KGTK, alapképzés, magyar tagozat, Menedzsment szakirány</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>2010 – 2012: BBTE KGTK, mesteri képzés, magyar tagozat, Vállalati Pénzügyi Menedzsment szakirány <br />\\n2007 – 2010: BBTE KGTK, alapképzés, magyar tagozat, Menedzsment szakirány</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Vincze Tamás\',
            \'format\' => NULL,
            \'safe_value\' => \'Vincze Tamás\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008\',
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
      \'last_comment_timestamp\' => \'1423230544\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1139\',
        \'source\' => \'node/1128\',
        \'alias\' => \'vincze-tamás\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1160\',
      \'uid\' => \'3\',
      \'title\' => \'Török Léna\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f22bd908-55e2-41a9-9b0f-92c7cf713959\',
      \'nid\' => \'1160\',
      \'type\' => \'person\',
      \'language\' => \'en\',
      \'created\' => \'1423231041\',
      \'changed\' => \'1423231041\',
      \'tnid\' => \'909\',
      \'translate\' => \'0\',
      \'uuid\' => \'f2631cb8-6794-4cf6-a6da-83ba628dcff8\',
      \'revision_timestamp\' => \'1423231041\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>-</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>-</p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Highschool alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Highschool alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp; &nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>   </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'570\',
            \'uid\' => \'3\',
            \'filename\' => \'törökléna Cropped.jpg\',
            \'uri\' => \'public://törökléna Cropped.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25084\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421854007\',
            \'type\' => \'image\',
            \'uuid\' => \'53dca2a3-9d1e-49de-9c74-4394160a47a2\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'268\',
              \'height\' => \'268\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'268\',
            \'height\' => \'268\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_university_studies\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Török Léna\',
            \'format\' => NULL,
            \'safe_value\' => \'Török Léna\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(),
      \'title_original\' => \'Török Léna\',
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
      \'last_comment_timestamp\' => \'1423231041\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1171\',
        \'source\' => \'node/1160\',
        \'alias\' => \'török-léna\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1120\',
      \'uid\' => \'3\',
      \'title\' => \'Német Hunor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'49a6bae4-550e-44b1-9069-fd177a9301e5\',
      \'nid\' => \'1120\',
      \'type\' => \'person\',
      \'language\' => \'ro\',
      \'created\' => \'1423230476\',
      \'changed\' => \'1423230476\',
      \'tnid\' => \'654\',
      \'translate\' => \'0\',
      \'uuid\' => \'f807a635-c372-4903-9e4b-0c0e8b84ca0f\',
      \'revision_timestamp\' => \'1423230476\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_job\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_membership\' => array(),
      \'field_membership_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Alumni\',
            \'format\' => NULL,
            \'safe_value\' => \'Alumni\',
          ),
        ),
      ),
      \'field_other_thoughts\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>&nbsp;&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>  </p>\\n",
          ),
        ),
      ),
      \'field_person_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'251\',
            \'uid\' => \'3\',
            \'filename\' => \'Nemet Hunor.jpg\',
            \'uri\' => \'public://Nemet Hunor.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30731\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421675533\',
            \'type\' => \'image\',
            \'uuid\' => \'45b70dcd-18c9-4233-85f6-ea0a6d7b7950\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'188\',
              \'height\' => \'250\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'188\',
            \'height\' => \'250\',
          ),
        ),
      ),
      \'field_type_of_person\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'field_university_studies\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Menedzsment - BSc</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Menedzsment - BSc</p>\\n",
          ),
        ),
      ),
      \'title_field\' => array(
        \'ro\' => array(
          array(
            \'value\' => \'Német Hunor\',
            \'format\' => NULL,
            \'safe_value\' => \'Német Hunor\',
          ),
        ),
      ),
      \'field_year_of_application\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2012\',
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
      \'last_comment_timestamp\' => \'1423230476\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1131\',
        \'source\' => \'node/1120\',
        \'alias\' => \'német-hunor\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
